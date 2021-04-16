#include <string>

#include "grasp3d_export.h"

namespace grasp3d {
class GRASP3D_EXPORT grasplib 
{
 public:
  int32_t print(const std::string &log) const;

 private:
  int grasp_num;
};
}  // namespace grasp3d