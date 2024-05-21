#include "amici/model.h"
#include "wrapfunctions.h"
#include "SKBR3.h"

namespace amici {
namespace generic_model {

std::unique_ptr<amici::Model> getModel() {
    return std::unique_ptr<amici::Model>(
        new amici::model_SKBR3::Model_SKBR3());
}


} // namespace generic_model

} // namespace amici
