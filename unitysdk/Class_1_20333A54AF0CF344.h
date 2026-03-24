#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_C7C770B106F16FD4;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_20333A54AF0CF344_METHOD_1_7C80F4B7497E6B44_OFFSET UNITYSDK_OFFSET(0x74D3C60)
#define CLASS_1_20333A54AF0CF344_METHOD_1_C114A1F8E08B6F92_1_OFFSET UNITYSDK_OFFSET(0x74D3C20)
#define CLASS_1_20333A54AF0CF344_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x74D3C10)
#define CLASS_1_20333A54AF0CF344_METHOD_1_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x74D3C40)
#define CLASS_1_20333A54AF0CF344_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x74D3C00)
#define CLASS_1_20333A54AF0CF344_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x74D3C30)
#define CLASS_1_20333A54AF0CF344_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x74D3C50)
#define CLASS_1_20333A54AF0CF344__CTOR_1_OFFSET UNITYSDK_OFFSET(0x74D3AA0)
#define CLASS_1_20333A54AF0CF344__CTOR_OFFSET UNITYSDK_OFFSET(0x74D3750)

inline static constexpr unsigned int Class_1_20333A54AF0CF344_TypeDefinitionIndex = 66299;

class Class_1_20333A54AF0CF344 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_4; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_3; // 0x18
	::System::Int32 Field_1_1; // 0x20
	::System::Int32 Field_1_0; // 0x24
	::System::Boolean Field_1_2; // 0x28

	::System::Void _ctor(::Class_3_C7C770B106F16FD4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C7C770B106F16FD4*))((::PBYTE)hIl2Cpp + CLASS_1_20333A54AF0CF344__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_20333A54AF0CF344__CTOR_1_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20333A54AF0CF344_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_20333A54AF0CF344_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Void Method_1_C114A1F8E08B6F92_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_20333A54AF0CF344_METHOD_1_C114A1F8E08B6F92_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_20333A54AF0CF344_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20333A54AF0CF344_METHOD_1_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20333A54AF0CF344_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::Class_3_C7C770B106F16FD4* Method_1_7C80F4B7497E6B44()
	{
		return ((::Class_3_C7C770B106F16FD4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20333A54AF0CF344_METHOD_1_7C80F4B7497E6B44_OFFSET))(this);
	}
};
