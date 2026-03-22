#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoDestructionObject_Enum_3_47EA880E4C799732.h"
#include "unitysdk/MoleMole/MonoSceneObjectBase.h"

class Class_2_208CC9941471731A_968;
class Class_2_84CEDCEF739506C1_2;

#define MOLEMOLE_MONODESTRUCTIONOBJECT_GETBASETEMPLATE_OFFSET UNITYSDK_OFFSET(0x8F8D940)
#define MOLEMOLE_MONODESTRUCTIONOBJECT_GETSUBID_OFFSET UNITYSDK_OFFSET(0x8F8D690)
#define MOLEMOLE_MONODESTRUCTIONOBJECT_GETSUBTEMPLATE_OFFSET UNITYSDK_OFFSET(0x8F8D8B0)
#define MOLEMOLE_MONODESTRUCTIONOBJECT_METHOD_7_C7E9B8BFC4E12591_OFFSET UNITYSDK_OFFSET(0x8F8D7E0)
#define MOLEMOLE_MONODESTRUCTIONOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x8F8D9D0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoDestructionObject_TypeDefinitionIndex = 45518;

	class MonoDestructionObject : public ::MoleMole::MonoSceneObjectBase
	{
	public:
		::System::Int32 _templateID; // 0x28
		::MoleMole::MonoDestructionObject_Enum_3_47EA880E4C799732 _idType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODESTRUCTIONOBJECT__CTOR_OFFSET))(this);
		}

		::System::Int32 GetSubID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODESTRUCTIONOBJECT_GETSUBID_OFFSET))(this);
		}

		::Class_2_208CC9941471731A_968* GetSubTemplate()
		{
			return ((::Class_2_208CC9941471731A_968*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODESTRUCTIONOBJECT_GETSUBTEMPLATE_OFFSET))(this);
		}

		::Class_2_84CEDCEF739506C1_2* GetBaseTemplate()
		{
			return ((::Class_2_84CEDCEF739506C1_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODESTRUCTIONOBJECT_GETBASETEMPLATE_OFFSET))(this);
		}

		static ::System::Int32 Method_7_C7E9B8BFC4E12591(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODESTRUCTIONOBJECT_METHOD_7_C7E9B8BFC4E12591_OFFSET))(a1);
		}
	};
}
