#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

namespace MoleMole { class MonoTweenAnimation; }
namespace MoleMole::SceneMark { class StageTweenAnimData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Component; }

#define CLASS_3_07B78E3CD989F5D5_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x8D0BB40)
#define CLASS_3_07B78E3CD989F5D5_METHOD_3_1C07CA9AB035B71A_OFFSET UNITYSDK_OFFSET(0x8D0BE00)
#define CLASS_3_07B78E3CD989F5D5_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x8D0BEE0)
#define CLASS_3_07B78E3CD989F5D5_METHOD_3_BEAB6CF0CF797770_OFFSET UNITYSDK_OFFSET(0x8D0BCC0)
#define CLASS_3_07B78E3CD989F5D5_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x8D0BA50)
#define CLASS_3_07B78E3CD989F5D5__CCTOR_OFFSET UNITYSDK_OFFSET(0x8D0BBA0)
#define CLASS_3_07B78E3CD989F5D5__CTOR_OFFSET UNITYSDK_OFFSET(0x8D0BC20)

inline static constexpr unsigned int Class_3_07B78E3CD989F5D5_TypeDefinitionIndex = 53280;

class Class_3_07B78E3CD989F5D5 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_4 = 0xA2; // 0x0
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Component*, ::MoleMole::SceneMark::StageTweenAnimData*>* Field_3_0; // 0x48
	::System::String* Field_3_3; // 0x50
	::MoleMole::MonoTweenAnimation* Field_3_1; // 0x58
	::System::Single Field_3_2; // 0x60

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_07B78E3CD989F5D5__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_07B78E3CD989F5D5__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_07B78E3CD989F5D5_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_07B78E3CD989F5D5_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_07B78E3CD989F5D5* Method_3_BEAB6CF0CF797770()
	{
		return ((::Class_3_07B78E3CD989F5D5*(*)())((::PBYTE)hIl2Cpp + CLASS_3_07B78E3CD989F5D5_METHOD_3_BEAB6CF0CF797770_OFFSET))();
	}

	::System::Void Method_3_1C07CA9AB035B71A(::MoleMole::MonoTweenAnimation* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoTweenAnimation*))((::PBYTE)hIl2Cpp + CLASS_3_07B78E3CD989F5D5_METHOD_3_1C07CA9AB035B71A_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_07B78E3CD989F5D5_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
