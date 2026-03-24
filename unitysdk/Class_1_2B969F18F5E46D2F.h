#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1110.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1077;
namespace FlatBuffers { class ByteBuffer; }

#define CLASS_1_2B969F18F5E46D2F_METHOD_1_AF518E2FECFB1139_OFFSET UNITYSDK_OFFSET(0x1AE1B670)
#define CLASS_1_2B969F18F5E46D2F_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1AE1B620)
#define CLASS_1_2B969F18F5E46D2F_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1AE1B5D0)
#define CLASS_1_2B969F18F5E46D2F__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE1B610)

inline static constexpr unsigned int Class_1_2B969F18F5E46D2F_TypeDefinitionIndex = 82314;

class Class_1_2B969F18F5E46D2F : public ::System::Object
{
public:
	::Struct_2_1862835F8661A21F_1110 Field_1_0; // 0x10
	::Il2CppArray<::Class_2_208CC9941471731A_1077*>* Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B969F18F5E46D2F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B969F18F5E46D2F_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B969F18F5E46D2F_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_AF518E2FECFB1139(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_1_2B969F18F5E46D2F_METHOD_1_AF518E2FECFB1139_OFFSET))(this, a1);
	}
};
