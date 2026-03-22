#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_339;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_BE0B073400A4B849_METHOD_1_AFD3960ECD5852FD_1_OFFSET UNITYSDK_OFFSET(0x9E51670)
#define CLASS_1_BE0B073400A4B849_METHOD_1_AFD3960ECD5852FD_OFFSET UNITYSDK_OFFSET(0x9E510F0)
#define CLASS_1_BE0B073400A4B849_METHOD_1_B8F6E52EB6EB2313_OFFSET UNITYSDK_OFFSET(0x9E511F0)
#define CLASS_1_BE0B073400A4B849__CTOR_OFFSET UNITYSDK_OFFSET(0x9E510E0)

inline static constexpr unsigned int Class_1_BE0B073400A4B849_TypeDefinitionIndex = 43572;

class Class_1_BE0B073400A4B849 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE0B073400A4B849__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_AFD3960ECD5852FD(::System::String* a1, ::System::Int32 a2, ::System::String* a3, ::System::Action_1<::System::Int32>* a4)
	{
		return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::String*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_BE0B073400A4B849_METHOD_1_AFD3960ECD5852FD_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_AFD3960ECD5852FD_1(::System::String* a1, ::System::Int32 a2, ::System::String* a3, ::System::Action_1<::System::Int32>* a4)
	{
		return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::String*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_BE0B073400A4B849_METHOD_1_AFD3960ECD5852FD_1_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_2_208CC9941471731A_339* Method_1_B8F6E52EB6EB2313(::System::String* a1)
	{
		return ((::Class_2_208CC9941471731A_339*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BE0B073400A4B849_METHOD_1_B8F6E52EB6EB2313_OFFSET))(a1);
	}
};
