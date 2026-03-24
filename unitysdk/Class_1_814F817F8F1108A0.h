#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_968;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_814F817F8F1108A0_METHOD_1_1B82D823AE4FCDB4_OFFSET UNITYSDK_OFFSET(0x87108B0)
#define CLASS_1_814F817F8F1108A0_METHOD_1_28648F3E495195A9_OFFSET UNITYSDK_OFFSET(0x8710970)
#define CLASS_1_814F817F8F1108A0_METHOD_1_94936E05BA708C33_OFFSET UNITYSDK_OFFSET(0x8710AC0)
#define CLASS_1_814F817F8F1108A0_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x8710B50)
#define CLASS_1_814F817F8F1108A0__CTOR_OFFSET UNITYSDK_OFFSET(0x8710A00)

inline static constexpr unsigned int Class_1_814F817F8F1108A0_TypeDefinitionIndex = 37991;

class Class_1_814F817F8F1108A0 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_814F817F8F1108A0__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1B82D823AE4FCDB4(::Class_2_208CC9941471731A_968* a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_968*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_814F817F8F1108A0_METHOD_1_1B82D823AE4FCDB4_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_28648F3E495195A9(::Class_2_208CC9941471731A_968* a1, ::System::Int32& a2)
	{
		return ((::System::String*(*)(::PVOID, ::Class_2_208CC9941471731A_968*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_814F817F8F1108A0_METHOD_1_28648F3E495195A9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_94936E05BA708C33(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_814F817F8F1108A0_METHOD_1_94936E05BA708C33_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_814F817F8F1108A0_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}
};
