#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BDDDDB46A99CFF4C.h"
#include "unitysdk/Class_3_B1250269F1E3BC27_Struct_2_66EE559EF62DCFBC.h"
#include "unitysdk/UnityEngine/LayerMask.h"

class Class_3_9AE843FF905C0BDB;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define CLASS_2_A7E7B210EFC880B8_METHOD_2_2CD6D17D088D5DB9_OFFSET UNITYSDK_OFFSET(0xD40F360)
#define CLASS_2_A7E7B210EFC880B8_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0xD40F0E0)
#define CLASS_2_A7E7B210EFC880B8_METHOD_2_9D455FE4693966A8_OFFSET UNITYSDK_OFFSET(0xD40F620)
#define CLASS_2_A7E7B210EFC880B8__CTOR_OFFSET UNITYSDK_OFFSET(0xD40F270)

inline static constexpr unsigned int Class_2_A7E7B210EFC880B8_TypeDefinitionIndex = 73563;

class Class_2_A7E7B210EFC880B8 : public ::Class_1_BDDDDB46A99CFF4C
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_5; // 0x80
	::Il2CppArray<::UnityEngine::Collider*>* Field_2_0; // 0x88
	::System::Collections::Generic::List_1<::Class_3_B1250269F1E3BC27_Struct_2_66EE559EF62DCFBC>* Field_2_3; // 0x90
	::Class_3_9AE843FF905C0BDB* Field_2_6; // 0x98
	::UnityEngine::LayerMask Field_2_4; // 0xA0
	::System::Boolean Field_2_2; // 0xA4
	::System::Boolean Field_2_1; // 0xA5

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7E7B210EFC880B8__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7E7B210EFC880B8_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_2_2CD6D17D088D5DB9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7E7B210EFC880B8_METHOD_2_2CD6D17D088D5DB9_OFFSET))(this);
	}

	::System::Void Method_2_9D455FE4693966A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7E7B210EFC880B8_METHOD_2_9D455FE4693966A8_OFFSET))(this);
	}
};
