#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRigidbody; }

#define MOLEMOLE_UIRIGIDBODY_CLASS_1_2CE84355BACE8BA1_METHOD_1_4C0B9E1915FA89DA_OFFSET UNITYSDK_OFFSET(0xD294AC0)
#define MOLEMOLE_UIRIGIDBODY_CLASS_1_2CE84355BACE8BA1_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0xD294C20)
#define MOLEMOLE_UIRIGIDBODY_CLASS_1_2CE84355BACE8BA1__CTOR_OFFSET UNITYSDK_OFFSET(0xD294AB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRigidbody_Class_1_2CE84355BACE8BA1_TypeDefinitionIndex = 64233;

	class UIRigidbody_Class_1_2CE84355BACE8BA1 : public ::System::Object
	{
	public:
		::MoleMole::UIRigidbody* Field_1_1; // 0x10
		::System::Single Field_1_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_CLASS_1_2CE84355BACE8BA1__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_4C0B9E1915FA89DA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_CLASS_1_2CE84355BACE8BA1_METHOD_1_4C0B9E1915FA89DA_OFFSET))(this, a1);
		}

		::System::Single Method_1_5323F2DF46A044DA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_CLASS_1_2CE84355BACE8BA1_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
		}
	};
}
