#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4A3DFBC3F76D5549.h"
#include "unitysdk/System/Object.h"

class Class_1_80DF1DB3FC47B2D6;
class Class_2_208CC9941471731A_956;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_9D9172C07F82DDAE_CLASS_1_9C5E3FF38EA712A3_METHOD_1_1E895D3FF72E5431_OFFSET UNITYSDK_OFFSET(0x69A98D0)
#define CLASS_2_9D9172C07F82DDAE_CLASS_1_9C5E3FF38EA712A3_METHOD_1_F0F8DE036FE283F6_OFFSET UNITYSDK_OFFSET(0x69A9940)
#define CLASS_2_9D9172C07F82DDAE_CLASS_1_9C5E3FF38EA712A3__CTOR_OFFSET UNITYSDK_OFFSET(0x69A98C0)

inline static constexpr unsigned int Class_2_9D9172C07F82DDAE_Class_1_9C5E3FF38EA712A3_TypeDefinitionIndex = 56262;

class Class_2_9D9172C07F82DDAE_Class_1_9C5E3FF38EA712A3 : public ::System::Object
{
public:
	::Class_1_80DF1DB3FC47B2D6* Field_1_2; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_1; // 0x18
	::Enum_3_4A3DFBC3F76D5549 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D9172C07F82DDAE_CLASS_1_9C5E3FF38EA712A3__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1E895D3FF72E5431(::Class_2_208CC9941471731A_956* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_956*))((::PBYTE)hIl2Cpp + CLASS_2_9D9172C07F82DDAE_CLASS_1_9C5E3FF38EA712A3_METHOD_1_1E895D3FF72E5431_OFFSET))(this, a1);
	}

	::System::Void Method_1_F0F8DE036FE283F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D9172C07F82DDAE_CLASS_1_9C5E3FF38EA712A3_METHOD_1_F0F8DE036FE283F6_OFFSET))(this);
	}
};
