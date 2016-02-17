int main()
{
  int randomNum = random_engine();
  char numGuessed = 'n';
  int guessMade;
  int guessTotal = 0;
  
  while(numGuessed != 'y')
  {
    //prompt for a guess
    cout << "I've chosen a number between 0 and 99. What is it? ";
    cin >> guessMade;
    
    if(guessMade == randomNum)
    {
		if (guessTotal < 3)
		{
			cout << "You got it right in only " << guessTotal << " guesses! That's incredible!";
			numGuessed = 'y';
		}
		else if (guessTotal >= 3 && guessTotal < 7)
		{
			cout << "You got it right in " << guessTotal << " guesses! Not too shabby!";
			numGuessed = 'y';
		}
		else if (guessTotal >= 7)
		{
			cout << "You got it right in " << guessTotal << " guesses! Hope you do better next time!";
			numGuessed = 'y';
		}
    } 
    else if (guessMade < randomNum)
    {
      cout << "Your guess is too low. Try again!\n";
      guessTotal++;
    }
    else if (guessMade > randomNum)
    {
      cout << "Your guess is too high. Try again!\n";
      guessTotal++;
    }

  }
  cin.ignore();
  cin.get();
  return 0;
}
