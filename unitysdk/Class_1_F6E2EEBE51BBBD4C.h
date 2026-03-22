#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_1862835F8661A21F_856.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1042;
namespace FlatBuffers { class ByteBuffer; }

#define CLASS_1_F6E2EEBE51BBBD4C_METHOD_1_AF518E2FECFB1139_OFFSET UNITYSDK_OFFSET(0x1A060DC0)
#define CLASS_1_F6E2EEBE51BBBD4C_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1A060D70)
#define CLASS_1_F6E2EEBE51BBBD4C_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A060D20)
#define CLASS_1_F6E2EEBE51BBBD4C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A060D60)

inline static constexpr unsigned int Class_1_F6E2EEBE51BBBD4C_TypeDefinitionIndex = 80260;

class Class_1_F6E2EEBE51BBBD4C : public ::System::Object
{
public:
	::Il2CppArray<::Class_2_208CC9941471731A_1042*>* Field_1_1; // 0x10
	::Struct_2_1862835F8661A21F_856 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6E2EEBE51BBBD4C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6E2EEBE51BBBD4C_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F6E2EEBE51BBBD4C_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_AF518E2FECFB1139(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_1_F6E2EEBE51BBBD4C_METHOD_1_AF518E2FECFB1139_OFFSET))(this, a1);
	}
};
