#pragma once
#include <iostream>
using namespace std;

class Point_3
{
private:
	int x,
		y,
		z;


public:


		/// <summary>
		/// set all on 0
		/// </summary>
		Point_3(){

			x = 0;
			y = 0;
			z = 0;
		
		}


		/// <summary>
		/// set all coordinates
		/// </summary>
		/// <param name="px">x for point</param>
		/// <param name="py">y for point</param>
		/// <param name="pz">z for point</param>
		Point_3(int px,int py,int pz) {

			x = px;
			y = py;
			z = pz;

		}


	/// <summary>
	/// set x instantly
	/// </summary>
	/// <param name="px">x for point</param>
	/// <returns></returns>
	int Get_X(int px) { x = px; }

	/// <summary>
	/// set y instantly
	/// </summary>
	/// <param name="px">y for point</param>
	/// <returns></returns>
	int Get_Y(int py) { y = py; }


	/// <summary>
	/// set z instantly
	/// </summary>
	/// <param name="px">z for point</param>
	/// <returns></returns>
	int Get_Z(int pz) { z = pz; }


	/// <summary>
	/// request x at the user
	/// </summary>
	void Set_X() { cin >> x; }

	/// <summary>
	/// request y at the user
	/// </summary>
	void Set_Y() { cin >> y; }

	/// <summary>
	///	request z at the user
	/// </summary>
	void Set_Z() { cin >> z; }



	void show();

};