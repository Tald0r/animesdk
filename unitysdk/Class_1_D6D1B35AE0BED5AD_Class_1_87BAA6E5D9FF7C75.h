#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6E640EA44E657B61;
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D6D1B35AE0BED5AD_CLASS_1_87BAA6E5D9FF7C75__CTOR_OFFSET UNITYSDK_OFFSET(0xB957A70)

inline static constexpr unsigned int Class_1_D6D1B35AE0BED5AD_Class_1_87BAA6E5D9FF7C75_TypeDefinitionIndex = 73162;

class Class_1_D6D1B35AE0BED5AD_Class_1_87BAA6E5D9FF7C75 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Battle::Entity*>* Field_1_3; // 0x10
	::Class_1_6E640EA44E657B61* Field_1_0; // 0x18
	::System::Action* Field_1_2; // 0x20
	::System::Boolean Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6D1B35AE0BED5AD_CLASS_1_87BAA6E5D9FF7C75__CTOR_OFFSET))(this);
	}
};
