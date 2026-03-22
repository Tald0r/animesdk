#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_C28A9C2FFBD9548F;
namespace MoleMole::Battle { class Entity; }

#define CLASS_2_C28A9C2FFBD9548F_CLASS_1_521FEE752894BD48_METHOD_1_1093F6BE355DE21B_OFFSET UNITYSDK_OFFSET(0x711F470)
#define CLASS_2_C28A9C2FFBD9548F_CLASS_1_521FEE752894BD48__CTOR_OFFSET UNITYSDK_OFFSET(0x711F460)

inline static constexpr unsigned int Class_2_C28A9C2FFBD9548F_Class_1_521FEE752894BD48_TypeDefinitionIndex = 38413;

class Class_2_C28A9C2FFBD9548F_Class_1_521FEE752894BD48 : public ::System::Object
{
public:
	::Class_2_C28A9C2FFBD9548F* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C28A9C2FFBD9548F_CLASS_1_521FEE752894BD48__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1093F6BE355DE21B(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_C28A9C2FFBD9548F_CLASS_1_521FEE752894BD48_METHOD_1_1093F6BE355DE21B_OFFSET))(this, a1);
	}
};
