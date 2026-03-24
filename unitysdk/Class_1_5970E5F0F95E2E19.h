#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1257.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1075;
namespace FlatBuffers { class ByteBuffer; }

#define CLASS_1_5970E5F0F95E2E19_METHOD_1_AF518E2FECFB1139_OFFSET UNITYSDK_OFFSET(0x1B030FE0)
#define CLASS_1_5970E5F0F95E2E19_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1B030F90)
#define CLASS_1_5970E5F0F95E2E19_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1B030F40)
#define CLASS_1_5970E5F0F95E2E19__CTOR_OFFSET UNITYSDK_OFFSET(0x1B030F80)

inline static constexpr unsigned int Class_1_5970E5F0F95E2E19_TypeDefinitionIndex = 82363;

class Class_1_5970E5F0F95E2E19 : public ::System::Object
{
public:
	::Struct_2_1862835F8661A21F_1257 Field_1_0; // 0x10
	::Il2CppArray<::Class_2_208CC9941471731A_1075*>* Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5970E5F0F95E2E19__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5970E5F0F95E2E19_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5970E5F0F95E2E19_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_AF518E2FECFB1139(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_1_5970E5F0F95E2E19_METHOD_1_AF518E2FECFB1139_OFFSET))(this, a1);
	}
};
