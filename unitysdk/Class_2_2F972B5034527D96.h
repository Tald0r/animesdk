#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/Struct_2_0B8A00E6770FCC03.h"

class Class_0_16E4307DCC419505_495;
class Class_1_B920C49EB192B015;
class Class_1_E04739D1A87B45E5;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2F972B5034527D96_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA941F0)
#define CLASS_2_2F972B5034527D96_METHOD_2_32460A23F1A1DEF1_OFFSET UNITYSDK_OFFSET(0xBA94550)
#define CLASS_2_2F972B5034527D96_METHOD_2_3B2051C60621D523_OFFSET UNITYSDK_OFFSET(0xBA948A0)
#define CLASS_2_2F972B5034527D96_METHOD_2_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0xBA947D0)
#define CLASS_2_2F972B5034527D96_METHOD_2_E1513374C600EBEC_OFFSET UNITYSDK_OFFSET(0xBA942D0)
#define CLASS_2_2F972B5034527D96_ONCREATE_OFFSET UNITYSDK_OFFSET(0xBA94190)
#define CLASS_2_2F972B5034527D96__CTOR_OFFSET UNITYSDK_OFFSET(0xBA94250)

inline static constexpr unsigned int Class_2_2F972B5034527D96_TypeDefinitionIndex = 64076;

class Class_2_2F972B5034527D96 : public ::Foundation::SingletonDisposable_1<::Class_2_2F972B5034527D96*>
{
public:
	// static const ::System::Int32 Field_2_1 = 0x12C; // 0x0
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_495*>* Field_2_0; // 0x10
	::System::Int32 Field_2_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F972B5034527D96__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F972B5034527D96_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F972B5034527D96_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_E1513374C600EBEC(::Class_1_B920C49EB192B015* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B920C49EB192B015*))((::PBYTE)hIl2Cpp + CLASS_2_2F972B5034527D96_METHOD_2_E1513374C600EBEC_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_32460A23F1A1DEF1(::Class_1_E04739D1A87B45E5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E04739D1A87B45E5*))((::PBYTE)hIl2Cpp + CLASS_2_2F972B5034527D96_METHOD_2_32460A23F1A1DEF1_OFFSET))(this, a1);
	}

	::System::Void Method_2_6BCEDD4814D8A8D9(::Struct_2_0B8A00E6770FCC03& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_0B8A00E6770FCC03&))((::PBYTE)hIl2Cpp + CLASS_2_2F972B5034527D96_METHOD_2_6BCEDD4814D8A8D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_3B2051C60621D523()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F972B5034527D96_METHOD_2_3B2051C60621D523_OFFSET))(this);
	}
};
