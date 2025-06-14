#include <iostream>
#include <iomanip>
using namespace std;
#include <string>
#include <fstream>
#include <vector>
#include <sstream>







//void main() {
//
//	ofstream fout("test.txt");
//	fout << "hello file" << endl;
//	fout << "Second LINE";
//	fout.close();
//
//
//	ifstream file("test.txt");
//	if (!file.is_open()) {
//		cerr << "Coudn't open file :("<<endl;
//	}
//
//
//
//	ifstream fin("test.txt");
//	string text;
//	while (getline(fin, text)) {
//		cout << text << endl;
//	}
//	fin.close();
//}



































//void main() {
//	ifstream fin("source.txt");
//	//ofstream fout("copy.txt");
//
//
//	//if (!fin || !fout) {
//	//	cerr << "We have a problem";
//	//}
//
//
//
//
//
//	//string line;
//	//while (getline(fin, line)) {
//	//	fout << line << endl;
//	//}
//
//	//cout << "File successfully copied!" << endl;
//
//
//
//
//
//
//
//
//
//
//
//
//
//	//string word, longest;
//
//	//while (fin >> word) {
//	//	if (word.length() > longest.length()) {
//	//		longest = word;
//	//	}
//	//}
//
//	//cout << "Longest word: " << longest << endl;
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//	//vector<string> lines;
//	//string line;
//
//
//	//while (getline(fin, line)) {
//	//	lines.push_back(line);
//	//}
//
//	//for (int i = lines.size()-1; i >= 0; i--) {
//	//	fout << lines[i] << endl;
//	//}
//
//	//cout << "Strings are reversed!!!\n";
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//	//string comment;
//	//cout << "Enter a comment to add to LOG-file: ";
//	//getline(cin, comment);
//	//fout << "//" << comment << endl;
//	//cout << "Comment added successfully!" << endl;
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//	//ofstream fout("table.txt");
//	//for (int i = 1; i <= 10; i++) {
//	//	for (int j = 1; j <= 10; j++) {
//	//		fout << i << "*" << j << "=" << i * j << endl;
//	//	}
//	//	fout << "----------------------------\n";
//	//}
//	//cout << "Table successfulle generated!";
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//	//ifstream fin("text.txt");
//
//	//string word;
//	// 
//	//while (fin >> word) {
//	//	if (word.length() >= 6) {
//	//		cout << word << endl;
//	//	}
//	//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//	//ofstream fout("even.txt");
//	//for (int i = 2; i <= 100; i++) {
//	//	if (i % 2 == 0) {
//	//		fout << i<<endl;
//	//	}
//	//}
//	//cout << "generated!";
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//	//string word;
//
//	//char symb = 'l';
//
//	//int count = 0;
//	//
//
//	//while (fin >> word) {
//	//	
//	//	for (char c : word) {
//	//		c = tolower(c);
//	//		if (c == symb) {
//	//			count++;
//	//		}
//	//	}
//	//}
//
//	//cout << count;
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//	fin.close();
//	//fout.close();
//}



























































//void main() {
//
//	ifstream fin("attendance.txt");
//	ofstream fout("summary.txt");
//
//	string line;
//
//	int totalStudents = 0, totalPresent = 0, totalEntries = 0;
//
//	while (getline(fin, line)) {
//		istringstream iss(line);
//		string name;
//		int status, present = 0, absent = 0;
//		iss >> name;
//
//		while (iss >> status) {
//			if (status == 1) { present++; }
//			else { absent++; }
//		}
//
//		fout << name << ": Attendance - " << present << ", Absents: " << absent << endl;
//
//		totalStudents++;
//		totalPresent += present;
//		totalEntries += present + absent;
//	}
//
//	double avg = (totalEntries > 0) ? (double)totalPresent / totalEntries * 100 : 0;
//	fout << "---------------------------------------------------------------------" << endl;
//
//	fout << "Average attedance: " << avg << " % " << endl;
//
//	fin.close();
//	fout.close();
//
//} 



























































void newFunction() {
	cout << "Wow. It is work now!!!";
}


void math(int a, int b) {
	cout << a + b;
}

void power(int a, int b) {
	cout << pow(a, b);
}

void main() {
	cout << "Repo working!!!";

	cout << "We are connected!!!";

	newFunction();
	math(11, 11);
	power(3, 3);
}

