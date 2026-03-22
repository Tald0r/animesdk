#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_FFA1DC45E82895CA_CLASS_1_A1B152800F64AF89__CTOR_OFFSET UNITYSDK_OFFSET(0x8CA1FE0)

inline static constexpr unsigned int Class_2_FFA1DC45E82895CA_Class_1_A1B152800F64AF89_TypeDefinitionIndex = 68250;

class Class_2_FFA1DC45E82895CA_Class_1_A1B152800F64AF89 : public ::System::Object
{
public:
	::MoleMole::UIControllerContextBase* Field_1_1; // 0x10
	::System::String* Field_1_0; // 0x18
	::System::Action_1<::MoleMole::UIBaseController*>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FFA1DC45E82895CA_CLASS_1_A1B152800F64AF89__CTOR_OFFSET))(this);
	}
};
