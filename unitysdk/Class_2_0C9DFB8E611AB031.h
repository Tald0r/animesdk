#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_872.h"

class Class_2_208CC9941471731A_1056;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_0C9DFB8E611AB031_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x1A50F700)
#define CLASS_2_0C9DFB8E611AB031_METHOD_2_32E47D6A527E924D_OFFSET UNITYSDK_OFFSET(0x1A50FB60)
#define CLASS_2_0C9DFB8E611AB031_METHOD_2_52F693593F7BBFE8_OFFSET UNITYSDK_OFFSET(0x1A50F7F0)
#define CLASS_2_0C9DFB8E611AB031_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A50F5E0)
#define CLASS_2_0C9DFB8E611AB031__CTOR_OFFSET UNITYSDK_OFFSET(0x1A50F620)

inline static constexpr unsigned int Class_2_0C9DFB8E611AB031_TypeDefinitionIndex = 81960;

class Class_2_0C9DFB8E611AB031 : public ::Class_1_275515F210334D06
{
public:
	::Struct_2_1862835F8661A21F_872 Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1056*>* Field_2_2; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1056*>* Field_2_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C9DFB8E611AB031__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C9DFB8E611AB031_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C9DFB8E611AB031_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_52F693593F7BBFE8(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_0C9DFB8E611AB031_METHOD_2_52F693593F7BBFE8_OFFSET))(this, a1);
	}

	::Class_2_208CC9941471731A_1056* Method_2_32E47D6A527E924D(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_1056*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0C9DFB8E611AB031_METHOD_2_32E47D6A527E924D_OFFSET))(this, a1);
	}
};
