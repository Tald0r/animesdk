#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_92D256FC55D8D091_Class_1_F6CF446D65DF58A2_2;
namespace MoleMole { class HollowEntityConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_92D256FC55D8D091_CLASS_1_8247B9D4397DFE19_METHOD_1_A8313B4758E8F710_OFFSET UNITYSDK_OFFSET(0x706B780)
#define CLASS_1_92D256FC55D8D091_CLASS_1_8247B9D4397DFE19__CTOR_OFFSET UNITYSDK_OFFSET(0x706B770)

inline static constexpr unsigned int Class_1_92D256FC55D8D091_Class_1_8247B9D4397DFE19_TypeDefinitionIndex = 57778;

class Class_1_92D256FC55D8D091_Class_1_8247B9D4397DFE19 : public ::System::Object
{
public:
	::Class_1_92D256FC55D8D091_Class_1_F6CF446D65DF58A2_2* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::HollowEntityConfig*>* Field_1_0; // 0x18
	::System::UInt32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92D256FC55D8D091_CLASS_1_8247B9D4397DFE19__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A8313B4758E8F710(::MoleMole::HollowEntityConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_92D256FC55D8D091_CLASS_1_8247B9D4397DFE19_METHOD_1_A8313B4758E8F710_OFFSET))(this, a1);
	}
};
