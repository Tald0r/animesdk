#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_1862835F8661A21F_359.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1076;
namespace FlatBuffers { class ByteBuffer; }

#define CLASS_1_3F0040B46F05D9C5_METHOD_1_AF518E2FECFB1139_OFFSET UNITYSDK_OFFSET(0x1AF34170)
#define CLASS_1_3F0040B46F05D9C5_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1AF344F0)
#define CLASS_1_3F0040B46F05D9C5_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1AF34120)
#define CLASS_1_3F0040B46F05D9C5__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF34160)

inline static constexpr unsigned int Class_1_3F0040B46F05D9C5_TypeDefinitionIndex = 82428;

class Class_1_3F0040B46F05D9C5 : public ::System::Object
{
public:
	::Struct_2_1862835F8661A21F_359 Field_1_0; // 0x10
	::Il2CppArray<::Class_2_208CC9941471731A_1076*>* Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F0040B46F05D9C5__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F0040B46F05D9C5_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_AF518E2FECFB1139(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_1_3F0040B46F05D9C5_METHOD_1_AF518E2FECFB1139_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F0040B46F05D9C5_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}
};
