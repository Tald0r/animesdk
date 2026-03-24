#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_C8629618711DF8B3.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_3_81169F718F8970FA_CLASS_1_4932819C42AE7292_METHOD_1_7EB62F550E616822_OFFSET UNITYSDK_OFFSET(0xBCB6770)
#define CLASS_3_81169F718F8970FA_CLASS_1_4932819C42AE7292__CTOR_OFFSET UNITYSDK_OFFSET(0xBCB6760)

inline static constexpr unsigned int Class_3_81169F718F8970FA_Class_1_4932819C42AE7292_TypeDefinitionIndex = 47464;

class Class_3_81169F718F8970FA_Class_1_4932819C42AE7292 : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_81169F718F8970FA_CLASS_1_4932819C42AE7292__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7EB62F550E616822(::Struct_2_C8629618711DF8B3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + CLASS_3_81169F718F8970FA_CLASS_1_4932819C42AE7292_METHOD_1_7EB62F550E616822_OFFSET))(this, a1);
	}
};
