import 'package:flutter/material.dart';

void main() {
  runApp(MaterialApp(
    title: 'Tip Calculator',
    home: HomePage(),
  ));
}

class HomePage extends StatelessWidget {
  double amount =0, percentagetip = 0, total =0, tipamount = 0;
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text('Tip Calculator'),
      ),
      body: Center(
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: <Widget>[
            TextField(
                keyboardType: TextInputType.number,
                decoration: InputDecoration(
                    labelText: 'Bill Amount',
                    hintText: 'Enter Bill Amount e.g. 6000',
                    border: OutlineInputBorder(
                        borderRadius: BorderRadius.circular(5.0)
                    )
                ),
                onChanged: (String str){
                  amount = double.parse(str);
                }
            ),
            TextField(
                keyboardType: TextInputType.number,
                decoration: InputDecoration(
                    labelText: 'Tip Percentage',
                    hintText: 'Enter Tip Percentage e.g. 10',
                    border: OutlineInputBorder(
                        borderRadius: BorderRadius.circular(5.0)
                    )
                ),
                onChanged: (String str2){
                  percentagetip = double.parse(str2);
                }
            ),
            ElevatedButton(
              child: Text('Calculate Total Bill'),
              onPressed: () {
                tipamount = (percentagetip/100)*amount;
                total = amount + tipamount;
                print("entered amount - $amount , tip amount - $tipamount , total amount - $total");
                calcBill(context);
              }
                ),
          ],
        ),
      ),
    );
}

  void calcBill(BuildContext context) {
    Widget okButton = TextButton(
      child: Text("OK"),
      onPressed:() {
        Navigator.pop(context);
      }
    );
    var alertDialog = AlertDialog(
      title: Text("Bill Details"),
      content: Text("Entered Amount - $amount \n Tip amount - $tipamount \n Total Amount - $total"),
      actions: [
        okButton,
      ],
    );

    showDialog(
        context: context,
        builder: (BuildContext context) => alertDialog);
  }
  }