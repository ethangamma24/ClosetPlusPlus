#include "belt.h"
/******************************************************************************
 * File Name: belt.cc
 * Created by: Stephen M. Reaves
 * Date Last Modified:
 *
 * Summary:
 *
 */


/******************************************************************************
 * Constructor
 */
Belt::Belt() {}

Belt::Belt(int id, string name, string prim_color, string sec_color, 
           string tert_color, string material, string pattern) {
  this->id_ = id;
  this->name_ = name;
  this->primary_color_ = prim_color;
  this->secondary_color_ = sec_color;
  this->tertiary_color_ = tert_color;
  this->material_ = material;
  this->pattern_ = pattern;
}

/******************************************************************************
 * Deconstructor
 */
Belt::~Belt() {}

/******************************************************************************
 * Accessors and Mutators
 */

/******************************************************************************
 * General Functions
 */

/******************************************************************************
 * DEPRECATED
 *
 * Function 'ToXML'
 * Returns:
 *    XML representing the belt.
 */
string Belt::ToXML() const {
  string s = "";

  s += "  <Belt ID=" + to_string(this->id_) + ">\n";
  s += "    <Name>" + this->name_ + "</Name>\n";
  s += "    <Primary Color>" + this->primary_color_ + "</Primary Color>\n";
  s += "    <Secondary Color>" + this->secondary_color_ + "</Secondary Color>\n";
  s += "    <Tertiary Color>" + this->tertiary_color_ + "</Tertiary Color>\n";
  s += "    <Material>" + this->material_ + "</Material>\n";
  s += "  </Belt>\n";

  return s;
}

/******************************************************************************
 * Function 'ToString'
 * Returns:
 *    'string' representing the belt.
 */
string Belt::ToString() const {
  string s = "\n";

  s += "Name: " + this->name_ + "\n";
  s += "ID:   " + to_string(this->id_);
  s += "\n";
  s += "  -> Primary Color:   " + this->primary_color_ + "\n";
  s += "  -> Secondary Color: " + this->secondary_color_ + "\n";
  s += "  -> Tertiary Color:  " + this->tertiary_color_ + "\n";
  s += "  -> Material:        " + this->material_ + "\n";
  s += "  -> Pattern:         " + this->pattern_ + "\n";

  return s;
}
