#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MarcelShape.h"
#include "unitysdk/MoleMole/MarcelShapeConfig.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole { class MarcelConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_1E20D03A87E712A3_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0xCB6E030)
#define CLASS_1_1E20D03A87E712A3_METHOD_1_17ACC65B328D3FFB_OFFSET UNITYSDK_OFFSET(0xCB6E440)
#define CLASS_1_1E20D03A87E712A3_METHOD_1_23B573F7FD360F67_OFFSET UNITYSDK_OFFSET(0xCB6E500)
#define CLASS_1_1E20D03A87E712A3_METHOD_1_280B01264FB9A3C3_OFFSET UNITYSDK_OFFSET(0xCB6E4A0)
#define CLASS_1_1E20D03A87E712A3_METHOD_1_3150507749BCEAEC_OFFSET UNITYSDK_OFFSET(0xCB6E3E0)
#define CLASS_1_1E20D03A87E712A3_METHOD_1_33987E1168B8A343_OFFSET UNITYSDK_OFFSET(0xCB6E290)
#define CLASS_1_1E20D03A87E712A3_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0xCB6DF20)
#define CLASS_1_1E20D03A87E712A3_METHOD_1_C31A5D35971E681E_OFFSET UNITYSDK_OFFSET(0xCB6DEC0)

inline static constexpr unsigned int Class_1_1E20D03A87E712A3_TypeDefinitionIndex = 80634;

class Class_1_1E20D03A87E712A3 : public ::System::Object
{
public:
	static ::MoleMole::MarcelConfig** StaticGet_Field_1_0()
	{
		return (::MoleMole::MarcelConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1E20D03A87E712A3_TypeDefinitionIndex)->GetStaticField(0x32D00);
	}

	static ::UnityEngine::AnimationCurve* Method_1_C31A5D35971E681E()
	{
		return ((::UnityEngine::AnimationCurve*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1E20D03A87E712A3_METHOD_1_C31A5D35971E681E_OFFSET))();
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1E20D03A87E712A3_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_33987E1168B8A343(::MoleMole::MarcelShape a1, ::MoleMole::MarcelShapeConfig& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::MarcelShape, ::MoleMole::MarcelShapeConfig&))((::PBYTE)hIl2Cpp + CLASS_1_1E20D03A87E712A3_METHOD_1_33987E1168B8A343_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_3150507749BCEAEC()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_1E20D03A87E712A3_METHOD_1_3150507749BCEAEC_OFFSET))();
	}

	static ::UnityEngine::Color Method_1_17ACC65B328D3FFB()
	{
		return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + CLASS_1_1E20D03A87E712A3_METHOD_1_17ACC65B328D3FFB_OFFSET))();
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_1E20D03A87E712A3_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::System::Int32>* Method_1_280B01264FB9A3C3()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1E20D03A87E712A3_METHOD_1_280B01264FB9A3C3_OFFSET))();
	}

	static ::System::UInt32 Method_1_23B573F7FD360F67()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLASS_1_1E20D03A87E712A3_METHOD_1_23B573F7FD360F67_OFFSET))();
	}
};
