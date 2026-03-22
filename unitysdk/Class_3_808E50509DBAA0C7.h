#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

namespace MoleMole { class MonoEffectPluginDestroy; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_808E50509DBAA0C7_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xEE76860)
#define CLASS_3_808E50509DBAA0C7_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xEE769F0)
#define CLASS_3_808E50509DBAA0C7_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0xEE76950)
#define CLASS_3_808E50509DBAA0C7_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xEE76770)
#define CLASS_3_808E50509DBAA0C7__CCTOR_OFFSET UNITYSDK_OFFSET(0xEE768C0)
#define CLASS_3_808E50509DBAA0C7__CTOR_OFFSET UNITYSDK_OFFSET(0xEE76940)

inline static constexpr unsigned int Class_3_808E50509DBAA0C7_TypeDefinitionIndex = 77402;

class Class_3_808E50509DBAA0C7 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_5 = 0x63; // 0x0
	::MoleMole::MonoEffectPluginDestroy* Field_3_2; // 0x48
	::System::Collections::Generic::List_1<::UnityEngine::AnimatorStateInfo>* Field_3_0; // 0x50
	::System::Boolean Field_3_3; // 0x58
	::System::Boolean Field_3_1; // 0x59
	::System::Boolean Field_3_4; // 0x5A

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_808E50509DBAA0C7__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_808E50509DBAA0C7__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_808E50509DBAA0C7_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_808E50509DBAA0C7_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_808E50509DBAA0C7* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_808E50509DBAA0C7*(*)())((::PBYTE)hIl2Cpp + CLASS_3_808E50509DBAA0C7_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_808E50509DBAA0C7_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
