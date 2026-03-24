#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
template <typename T> class Class_0_16E4307DCC41950C;
template <typename T> class Class_1_B40FB169D1647C91;
template <typename T> class Class_1_C7B69AD07BC85C90;

inline static constexpr unsigned int Class_1_D59556891F60A761_TypeDefinitionIndex = 25293;

template <typename TVertex>
class Class_1_D59556891F60A761 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x0
	TVertex Field_1_1; // 0x0
	::System::Collections::Generic::Dictionary_2<TVertex, ::Class_1_C7B69AD07BC85C90<TVertex>*>* Field_1_2; // 0x0
};
