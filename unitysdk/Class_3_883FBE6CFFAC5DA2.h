#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T> class Action_1; }

#define CLASS_3_883FBE6CFFAC5DA2_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x625E040)
#define CLASS_3_883FBE6CFFAC5DA2_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x625E1D0)
#define CLASS_3_883FBE6CFFAC5DA2_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x625E130)
#define CLASS_3_883FBE6CFFAC5DA2_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x625DFD0)
#define CLASS_3_883FBE6CFFAC5DA2__CCTOR_OFFSET UNITYSDK_OFFSET(0x625E0A0)
#define CLASS_3_883FBE6CFFAC5DA2__CTOR_OFFSET UNITYSDK_OFFSET(0x625E120)

inline static constexpr unsigned int Class_3_883FBE6CFFAC5DA2_TypeDefinitionIndex = 39967;

class Class_3_883FBE6CFFAC5DA2 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_2 = 0x23; // 0x0
	::System::Action_1<::UnityEngine::Vector3>* Field_3_1; // 0x48
	::System::Int32 Field_3_0; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_883FBE6CFFAC5DA2__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883FBE6CFFAC5DA2__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883FBE6CFFAC5DA2_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883FBE6CFFAC5DA2_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_883FBE6CFFAC5DA2* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_883FBE6CFFAC5DA2*(*)())((::PBYTE)hIl2Cpp + CLASS_3_883FBE6CFFAC5DA2_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_883FBE6CFFAC5DA2_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
