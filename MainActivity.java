package com.example.android.tic_tac_toe;

import androidx.appcompat.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.ImageView;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {
    boolean a = true;
    // Player Representation by integers where 0 - O and 1 - X
    int activePlayer =0;
    int[] gameState={2,2,2,2,2,2,2,2,2};
    //1 - X and 0 - O and 2 - Null
    int[][] winCombinations= {{0,1,2},{3,4,5},{6,7,8},{0,3,6},{1,4,7},{2,5,8},{0,4,8},{2,4,6}};

    public void playerClick(View view){
        ImageView img = (ImageView) view;
        int tappedImage= Integer.parseInt(img.getTag().toString());
        if(!a){
            gameReset(view);
        }
        if(gameState[tappedImage]==2 && a){
            gameState[tappedImage] = activePlayer;
                    img.setTranslationY(-1000f);
            if(activePlayer == 0){
                img.setImageResource(R.drawable.o);
                activePlayer = 1;
                TextView status = findViewById(R.id.textView);
                status.setText("X's Turn - Tap to Play");
            }
            else{
                img.setImageResource(R.drawable.e);
                activePlayer = 0;
                TextView status = findViewById(R.id.textView);
                status.setText("O's Turn - Tap to Play");
            }
            img.animate().translationYBy(1000f).setDuration(300);
        }
        for(int[] winCombination: winCombinations){
            if(gameState[winCombination[0]] == gameState[winCombination[1]] && gameState[winCombination[1]] == gameState[winCombination[2]] && gameState[winCombination[0]]!=2){
                String winner;
                a = false;
                if(gameState[winCombination[0]] == 0){
                    winner = "O has won!! Tap at the Desired Starting Position to Start a New Game!!";
                }
                else{
                    winner = "X has won!! Tap at the Desired Starting Position to Start a New Game!!";
                }
                TextView status = findViewById(R.id.textView);
                status.setText(winner);
            }
        }
    }
    public void gameReset(View view){
        a = true;
        activePlayer =0;

        for(int i =0; i<gameState.length; i++){
            gameState[i]=2;
        }

        ((ImageView)findViewById(R.id.imageView0)).setImageResource(0);
        ((ImageView)findViewById(R.id.imageView1)).setImageResource(0);
        ((ImageView)findViewById(R.id.imageView2)).setImageResource(0);
        ((ImageView)findViewById(R.id.imageView3)).setImageResource(0);
        ((ImageView)findViewById(R.id.imageView4)).setImageResource(0);
        ((ImageView)findViewById(R.id.imageView5)).setImageResource(0);
        ((ImageView)findViewById(R.id.imageView6)).setImageResource(0);
        ((ImageView)findViewById(R.id.imageView7)).setImageResource(0);
        ((ImageView)findViewById(R.id.imageView8)).setImageResource(0);

        TextView status = findViewById(R.id.textView);
        status.setText("O's Turn - Tap to Play");
    }
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }
}