#include "amici/model.h"
#include "wrapfunctions.h"
#include "BT474EEI.h"

namespace amici {
namespace generic_model {

std::unique_ptr<amici::Model> getModel() {
    return std::unique_ptr<amici::Model>(
        new amici::model_BT474EEI::Model_BT474EEI());
}


} // namespace generic_model

} // namespace amici
