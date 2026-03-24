#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_1862835F8661A21F_839.h"
#include "unitysdk/System/Object.h"

class Class_2_D4180D159F003408;
namespace FlatBuffers { class ByteBuffer; }

#define CLASS_1_D9D62BE607040B0B_METHOD_1_6AD339F282AC5D0C_OFFSET UNITYSDK_OFFSET(0x199454B0)
#define CLASS_1_D9D62BE607040B0B_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x19946320)
#define CLASS_1_D9D62BE607040B0B_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x19945460)
#define CLASS_1_D9D62BE607040B0B__CTOR_OFFSET UNITYSDK_OFFSET(0x199454A0)

inline static constexpr unsigned int Class_1_D9D62BE607040B0B_TypeDefinitionIndex = 82255;

class Class_1_D9D62BE607040B0B : public ::System::Object
{
public:
	::Struct_2_1862835F8661A21F_839 Field_1_0; // 0x10
	::Il2CppArray<::Class_2_D4180D159F003408*>* Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9D62BE607040B0B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9D62BE607040B0B_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_6AD339F282AC5D0C(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_1_D9D62BE607040B0B_METHOD_1_6AD339F282AC5D0C_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9D62BE607040B0B_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}
};
