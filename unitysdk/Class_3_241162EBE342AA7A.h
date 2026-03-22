#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_241162EBE342AA7A_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x756A180)
#define CLASS_3_241162EBE342AA7A_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x756A2F0)
#define CLASS_3_241162EBE342AA7A_METHOD_3_D93EC3DDD756C47C_OFFSET UNITYSDK_OFFSET(0x756A350)
#define CLASS_3_241162EBE342AA7A_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x756A070)
#define CLASS_3_241162EBE342AA7A__CCTOR_OFFSET UNITYSDK_OFFSET(0x756A1E0)
#define CLASS_3_241162EBE342AA7A__CTOR_OFFSET UNITYSDK_OFFSET(0x756A260)

inline static constexpr unsigned int Class_3_241162EBE342AA7A_TypeDefinitionIndex = 45268;

class Class_3_241162EBE342AA7A : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_16 = 0x24; // 0x0
	::System::Collections::Generic::List_1<::System::Tuple_2<::System::Single, ::System::Single>*>* Field_3_15; // 0x48
	::System::Action* Field_3_3; // 0x50
	::System::String* Field_3_2; // 0x58
	::System::Single Field_3_12; // 0x60
	::System::Single Field_3_13; // 0x64
	::UnityEngine::Vector3 Field_3_9; // 0x68
	::System::Single Field_3_4; // 0x74
	::System::Boolean Field_3_8; // 0x78
	::System::Single Field_3_0; // 0x7C
	::System::Single Field_3_5; // 0x80
	::System::Single Field_3_1; // 0x84
	::UnityEngine::Vector3 Field_3_6; // 0x88
	::System::Single Field_3_11; // 0x94
	::System::Single Field_3_10; // 0x98
	::System::Single Field_3_14; // 0x9C
	::UnityEngine::Vector3 Field_3_7; // 0xA0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_241162EBE342AA7A__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_241162EBE342AA7A__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_241162EBE342AA7A_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_241162EBE342AA7A_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_241162EBE342AA7A_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_241162EBE342AA7A* Method_3_D93EC3DDD756C47C()
	{
		return ((::Class_3_241162EBE342AA7A*(*)())((::PBYTE)hIl2Cpp + CLASS_3_241162EBE342AA7A_METHOD_3_D93EC3DDD756C47C_OFFSET))();
	}
};
