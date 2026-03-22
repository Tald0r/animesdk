#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_A22179201E71E027;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_A22179201E71E027_CLASS_1_E874131EA263B152_METHOD_1_75BD73F8DD02595C_OFFSET UNITYSDK_OFFSET(0x9131620)
#define CLASS_2_A22179201E71E027_CLASS_1_E874131EA263B152__CTOR_OFFSET UNITYSDK_OFFSET(0x9131610)

inline static constexpr unsigned int Class_2_A22179201E71E027_Class_1_E874131EA263B152_TypeDefinitionIndex = 53900;

class Class_2_A22179201E71E027_Class_1_E874131EA263B152 : public ::System::Object
{
public:
	::Class_2_A22179201E71E027* Field_1_1; // 0x10
	::System::Action_1<::MoleMole::Battle::Entity*>* Field_1_2; // 0x18
	::System::Boolean Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A22179201E71E027_CLASS_1_E874131EA263B152__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_75BD73F8DD02595C(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_A22179201E71E027_CLASS_1_E874131EA263B152_METHOD_1_75BD73F8DD02595C_OFFSET))(this, a1);
	}
};
