#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1193.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_7B9B7FF76E9223D4;
class Class_2_208CC9941471731A_1014;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2F18475C1447D5AA_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x1A09C0B0)
#define CLASS_2_2F18475C1447D5AA_METHOD_2_25A8817C3318541F_OFFSET UNITYSDK_OFFSET(0x1A09C720)
#define CLASS_2_2F18475C1447D5AA_METHOD_2_32E47D6A527E924D_OFFSET UNITYSDK_OFFSET(0x1A08F070)
#define CLASS_2_2F18475C1447D5AA_METHOD_2_52F693593F7BBFE8_OFFSET UNITYSDK_OFFSET(0x1A09C3E0)
#define CLASS_2_2F18475C1447D5AA_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A09BF90)
#define CLASS_2_2F18475C1447D5AA_METHOD_2_DB4B6D1970066BE6_OFFSET UNITYSDK_OFFSET(0x1A09C1A0)
#define CLASS_2_2F18475C1447D5AA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A09BFD0)

inline static constexpr unsigned int Class_2_2F18475C1447D5AA_TypeDefinitionIndex = 80093;

class Class_2_2F18475C1447D5AA : public ::Class_1_275515F210334D06
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_208CC9941471731A_1014*>* Field_2_1; // 0x18
	::Struct_2_1862835F8661A21F_1193 Field_2_0; // 0x20
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::Class_2_208CC9941471731A_1014*, ::Class_1_7B9B7FF76E9223D4*>>* Field_2_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F18475C1447D5AA__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F18475C1447D5AA_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F18475C1447D5AA_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Boolean Method_2_DB4B6D1970066BE6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F18475C1447D5AA_METHOD_2_DB4B6D1970066BE6_OFFSET))(this);
	}

	::System::Void Method_2_52F693593F7BBFE8(::FlatBuffers::ByteBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_2F18475C1447D5AA_METHOD_2_52F693593F7BBFE8_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::ValueTuple_2<::Class_2_208CC9941471731A_1014*, ::Class_1_7B9B7FF76E9223D4*>>* Method_2_25A8817C3318541F()
	{
		return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::Class_2_208CC9941471731A_1014*, ::Class_1_7B9B7FF76E9223D4*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F18475C1447D5AA_METHOD_2_25A8817C3318541F_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_1014* Method_2_32E47D6A527E924D(::System::Int32 a1)
	{
		return ((::Class_2_208CC9941471731A_1014*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2F18475C1447D5AA_METHOD_2_32E47D6A527E924D_OFFSET))(this, a1);
	}
};
