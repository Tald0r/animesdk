#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03154A06B7628F3C.h"
#include "unitysdk/Enum_3_C0FE5C5ECCA2F598.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

inline static constexpr unsigned int Class_1_E1D9F53B91B72339_TypeDefinitionIndex = 58483;

template <typename TSlotState>
class Class_1_E1D9F53B91B72339 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<TSlotState, ::System::Action*>* Field_1_0; // 0x0
	::System::Collections::Generic::Dictionary_2<TSlotState, ::System::Action*>* Field_1_1; // 0x0
	::System::Collections::Generic::Dictionary_2<TSlotState, ::System::Collections::Generic::Dictionary_2<TSlotState, ::System::Action*>*>* Field_1_2; // 0x0
	TSlotState Field_1_3; // 0x0
	::Enum_3_03154A06B7628F3C Field_1_4; // 0x0
};
