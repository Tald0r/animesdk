#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_44F95CFC4F9A5E56.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_2B686E029302D4EC;
class Class_1_C4C2ACF3D9655BEA_1;
class Class_4_AC6D98911872E0CE;
namespace MoleMole::Config { class ConfigHollowChessboard; }

#define CLASS_2_24A8371BDF00F63B_METHOD_2_7A047080FEBD6D62_OFFSET UNITYSDK_OFFSET(0xBCB81E0)
#define CLASS_2_24A8371BDF00F63B_METHOD_2_B2BBBBCB4F730D0C_OFFSET UNITYSDK_OFFSET(0xBCB80D0)
#define CLASS_2_24A8371BDF00F63B_METHOD_2_CCBB9AC7889DFCD2_OFFSET UNITYSDK_OFFSET(0xBCB7BE0)
#define CLASS_2_24A8371BDF00F63B__CCTOR_OFFSET UNITYSDK_OFFSET(0xBCB81B0)
#define CLASS_2_24A8371BDF00F63B__CTOR_OFFSET UNITYSDK_OFFSET(0xBCB7B70)

inline static constexpr unsigned int Class_2_24A8371BDF00F63B_TypeDefinitionIndex = 65915;

class Class_2_24A8371BDF00F63B : public ::Class_1_44F95CFC4F9A5E56
{
public:
	static ::UnityEngine::Color* StaticGet_Field_2_0()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(Class_2_24A8371BDF00F63B_TypeDefinitionIndex)->GetStaticField(0xDC20);
	}
	::Class_1_C4C2ACF3D9655BEA_1* Field_2_1; // 0x10
	::MoleMole::Config::ConfigHollowChessboard* Field_2_2; // 0x18

	::System::Void _ctor(::Class_1_C4C2ACF3D9655BEA_1* a1, ::MoleMole::Config::ConfigHollowChessboard* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C4C2ACF3D9655BEA_1*, ::MoleMole::Config::ConfigHollowChessboard*))((::PBYTE)hIl2Cpp + CLASS_2_24A8371BDF00F63B__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_24A8371BDF00F63B__CCTOR_OFFSET))();
	}

	::System::Void Method_2_CCBB9AC7889DFCD2(::Class_4_AC6D98911872E0CE* a1, ::Class_1_2B686E029302D4EC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_AC6D98911872E0CE*, ::Class_1_2B686E029302D4EC*))((::PBYTE)hIl2Cpp + CLASS_2_24A8371BDF00F63B_METHOD_2_CCBB9AC7889DFCD2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7A047080FEBD6D62(::Class_4_AC6D98911872E0CE* a1, ::Class_1_2B686E029302D4EC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_AC6D98911872E0CE*, ::Class_1_2B686E029302D4EC*))((::PBYTE)hIl2Cpp + CLASS_2_24A8371BDF00F63B_METHOD_2_7A047080FEBD6D62_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_B2BBBBCB4F730D0C(::Class_4_AC6D98911872E0CE* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_4_AC6D98911872E0CE*))((::PBYTE)hIl2Cpp + CLASS_2_24A8371BDF00F63B_METHOD_2_B2BBBBCB4F730D0C_OFFSET))(this, a1);
	}
};
