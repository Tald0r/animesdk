#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoEntityModelModifier; }
namespace MoleMole::Battle { class Entity; }

#define CLASS_1_AE659A0544CF8D04_CLASS_1_8F8118D4ACB31570_METHOD_1_29D8E6A70E7CF9A5_OFFSET UNITYSDK_OFFSET(0x968F440)
#define CLASS_1_AE659A0544CF8D04_CLASS_1_8F8118D4ACB31570_METHOD_1_FF3DE7A1419B3EC4_OFFSET UNITYSDK_OFFSET(0x968EE30)
#define CLASS_1_AE659A0544CF8D04_CLASS_1_8F8118D4ACB31570__CTOR_OFFSET UNITYSDK_OFFSET(0x968EE20)

inline static constexpr unsigned int Class_1_AE659A0544CF8D04_Class_1_8F8118D4ACB31570_TypeDefinitionIndex = 62424;

class Class_1_AE659A0544CF8D04_Class_1_8F8118D4ACB31570 : public ::System::Object
{
public:
	::MoleMole::MonoEntityModelModifier* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE659A0544CF8D04_CLASS_1_8F8118D4ACB31570__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_FF3DE7A1419B3EC4(::MoleMole::Battle::Entity* a1, ::System::Int32 a2, ::MoleMole::MonoEntityModelModifier* a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Int32, ::MoleMole::MonoEntityModelModifier*))((::PBYTE)hIl2Cpp + CLASS_1_AE659A0544CF8D04_CLASS_1_8F8118D4ACB31570_METHOD_1_FF3DE7A1419B3EC4_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_29D8E6A70E7CF9A5(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_AE659A0544CF8D04_CLASS_1_8F8118D4ACB31570_METHOD_1_29D8E6A70E7CF9A5_OFFSET))(this, a1);
	}
};
