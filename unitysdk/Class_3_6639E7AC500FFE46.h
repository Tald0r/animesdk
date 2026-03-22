#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/MoleMole/Config/SurfGameItemDataEntry.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_6639E7AC500FFE46_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xA45DE50)
#define CLASS_3_6639E7AC500FFE46_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xA45DF40)
#define CLASS_3_6639E7AC500FFE46_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0xA45DFA0)
#define CLASS_3_6639E7AC500FFE46_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xA45DDE0)
#define CLASS_3_6639E7AC500FFE46__CCTOR_OFFSET UNITYSDK_OFFSET(0xA45DEB0)
#define CLASS_3_6639E7AC500FFE46__CTOR_OFFSET UNITYSDK_OFFSET(0xA45DF30)

inline static constexpr unsigned int Class_3_6639E7AC500FFE46_TypeDefinitionIndex = 52476;

class Class_3_6639E7AC500FFE46 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_6 = 0xC5; // 0x0
	::System::Func_2<::MoleMole::EntityHandle, ::System::Boolean>* Field_3_2; // 0x48
	::MoleMole::Config::SurfGameItemDataEntry Field_3_1; // 0x50
	::UnityEngine::Vector3 Field_3_5; // 0x68
	::System::Boolean Field_3_3; // 0x74
	::System::Int32 Field_3_0; // 0x78
	::UnityEngine::Vector3 Field_3_4; // 0x7C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_6639E7AC500FFE46__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6639E7AC500FFE46__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6639E7AC500FFE46_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6639E7AC500FFE46_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6639E7AC500FFE46_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_6639E7AC500FFE46* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_6639E7AC500FFE46*(*)())((::PBYTE)hIl2Cpp + CLASS_3_6639E7AC500FFE46_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
