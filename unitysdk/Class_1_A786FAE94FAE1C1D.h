#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class TrafficLightWallConfig;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A786FAE94FAE1C1D_METHOD_1_0E3D8071A5930FA8_1_OFFSET UNITYSDK_OFFSET(0x6741F20)
#define CLASS_1_A786FAE94FAE1C1D_METHOD_1_0E3D8071A5930FA8_OFFSET UNITYSDK_OFFSET(0x6741B20)
#define CLASS_1_A786FAE94FAE1C1D_METHOD_1_4B23D9FA65C3A418_OFFSET UNITYSDK_OFFSET(0x6741AA0)
#define CLASS_1_A786FAE94FAE1C1D_METHOD_1_7E1BADD1D133FA1C_1_OFFSET UNITYSDK_OFFSET(0x67412B0)
#define CLASS_1_A786FAE94FAE1C1D_METHOD_1_7E1BADD1D133FA1C_OFFSET UNITYSDK_OFFSET(0x67410B0)
#define CLASS_1_A786FAE94FAE1C1D_METHOD_1_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0x67414B0)
#define CLASS_1_A786FAE94FAE1C1D_METHOD_1_C6FA776B2F1B31A6_OFFSET UNITYSDK_OFFSET(0x67418D0)
#define CLASS_1_A786FAE94FAE1C1D__CTOR_OFFSET UNITYSDK_OFFSET(0x6741010)

inline static constexpr unsigned int Class_1_A786FAE94FAE1C1D_TypeDefinitionIndex = 50939;

class Class_1_A786FAE94FAE1C1D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_1_2; // 0x10
	::TrafficLightWallConfig* Field_1_4; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_1_3; // 0x20
	::TrafficLightWallConfig* Field_1_5; // 0x28
	::System::Int32 Field_1_0; // 0x30
	::System::Int32 Field_1_1; // 0x34

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A786FAE94FAE1C1D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_7E1BADD1D133FA1C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A786FAE94FAE1C1D_METHOD_1_7E1BADD1D133FA1C_OFFSET))(this);
	}

	::System::Void Method_1_7E1BADD1D133FA1C_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A786FAE94FAE1C1D_METHOD_1_7E1BADD1D133FA1C_1_OFFSET))(this);
	}

	::System::Void Method_1_9E38127F40B34F1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A786FAE94FAE1C1D_METHOD_1_9E38127F40B34F1F_OFFSET))(this);
	}

	::System::Void Method_1_C6FA776B2F1B31A6(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A786FAE94FAE1C1D_METHOD_1_C6FA776B2F1B31A6_OFFSET))(this, a1);
	}

	::System::Void Method_1_4B23D9FA65C3A418(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_A786FAE94FAE1C1D_METHOD_1_4B23D9FA65C3A418_OFFSET))(this, a1);
	}

	::System::Void Method_1_0E3D8071A5930FA8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A786FAE94FAE1C1D_METHOD_1_0E3D8071A5930FA8_OFFSET))(this);
	}

	::System::Void Method_1_0E3D8071A5930FA8_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A786FAE94FAE1C1D_METHOD_1_0E3D8071A5930FA8_1_OFFSET))(this);
	}
};
