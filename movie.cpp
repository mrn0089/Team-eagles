#include "Movie.h"
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Movie::addMovie()
{
    ifstream inFile("Movie.txt"); //open movies text file to read
    
    vector<Movie> movie;
    
    string mTitle;
    string mTime;
    string mRating;
    string mGenre;
    float mDuration;
    
    string fLine;
    int count=0;
    
    while(getline(inFile,fLine)) //scan movies txt file
    {

        movie.push_back(Movie());

        stringstream ss(fLine);
        
        

        //start reading the file line by line
        getline(ss,mTitle, ','); 
        movie[count].setMovTitle(mTitle);

        getline(ss,mTime, ',');
        movie[count].setMovTime(mTime);

        getline(ss,mRating, ',');
        movie[count].setMovRating(mRating);
        
        getline(ss,mDuration, ',');
        movie[count].setMovDuration(mDuration));

        count++;    //increment count
    }
    cout<<"Enter Movie Title: "<<endl;
    cin>>mTitle;
    cout<<"Enter Movie Timing: "<<endl;
    cin>>mTime;
    cout<<"Enter the Movie's Rating: "<<endl;
    cin>>mRating;
    cout<<"Enter the Duration of the Movie: "<<endl;
    cin>>mDuration;


    movie.push_back(Movie());
    
    //use user input to set movie info in array
    movie[movie.size()-1].setMovTitle(mTitle);
    movie[movie.size()-1].setMovTime(mTime);
    movie[movie.size()-1].setMovRating(mRating);
    movie[movie.size()-1].setMovGenre(mGenre);
    movie[movie.size()-1].setMovDuration(mDuration);

    inFile.close();
    
    ofstream outFile("Movie.txt");  //open output file to write into
    for(int i = 0; i != movie.size(); i++)
    {
        outFile << movie[i].mTitle << "," << movie[i].mTime << "," << movie[i].mRating << "," << movie[i].mGenre << movie[i].mDuration << endl;
    }

    outFile.close();
    
    movie.clear();  //clear movie vector
    
    return;
}

//
void Movie::removeMovie()
{
    ifstream myfile("Employee.txt"); //open movies text file
    
    vector<Movie> movie;
    
    string fLine;
    int count = 0;
    
    string title;
    string mtime;
    string rating;
    string genre;
    float duration;
    bool mFound = 0;
    int deleteMovie;

    cout<<"Enter the Title of the Movie to be Removed: " << endl;
    cin>>title;
    cout<<"Enter the Movie's Show Time:"<<endl;
    cin>>mtime;

    while(getline(inFile,fLine))    //loop through input file
    {

        movie.push_back(Movie());

        stringstream ss(fLine);

        getline(ss,title, ','); 
        movie[count].setMovTitle(title);

        getline(ss,mtime, ',');
        movie[count].setMovTime(mtime);

        getline(ss,rating, ',');
        movie[count].setMovRating(rating);
        
        getline(ss,genre, ',');
        movie[count].setMovGenre(genre));
        
        getline(ss,duration, ',');
        movie[count].setMovDuration(duration));

        count++;    //increment count
    }


    for(int i = 0; i < movie.size(); i++)
    {
        string tempLoop1;
        string tempLoop2;

        tempLoop1 = movie[i].movTitle;
        tempLoop2 = movie[i].movTime;

        if(tempLoop1 == firstMov && tempLoop2 == lastMov)
        {
            //if movie found, keep track of its location
            deleteMovie = i;
            mFound = true;
            cout << "The selected movie has been deleted." << endl;
        }
    }
    
    movie.erase(movie.begin() + deleteMovie);   //deletes movie from vector
    inFile.close();

    if(mFound == true)
    {
        ofstream myfile("Movie.txt");
        for(int i=0; i<movie.size(); i++)
        {
            inFile<<movie[i].movTitle<<","<<movie[i].movTime<<","<<movie[i].movRating<<movie[i].movGenre<<movie[i].movDuration<<endl;
        }
    }
    else if (mFound == false)
        cout<<"Movie not Found in Movie Database"<<endl;

    movie.clear();
    
    return;
}