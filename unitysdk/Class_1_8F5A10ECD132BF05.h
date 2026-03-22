#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Clamped_1.h"
#include "unitysdk/Foundation/NativeVariable_1.h"
#include "unitysdk/Foundation/ReadOnlyNativeVariable_1.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/Struct_2_2BF3DCBD364A6BA8.h"
#include "unitysdk/Struct_2_793645F2F9C6AFE4.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Animations/AnimationScriptPlayable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"

class Class_1_241E681AF3D7A598;
class Class_1_A238E29B18A7ED1A;
class Class_2_6131ABC6B1EC5318;
namespace Foundation { class NativeMemory; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Photo { class ScopedFrontCameraControlAnimationConfig; }
namespace MoleMole::Photo { class Skeleton; }
namespace System { class Action; }
namespace UnityEngine { class Animator; }
template <typename T> class Class_0_16E4307DCC419505_301;

#define CLASS_1_8F5A10ECD132BF05_DISPOSE_OFFSET UNITYSDK_OFFSET(0x65ECFC0)
#define CLASS_1_8F5A10ECD132BF05_METHOD_1_304C5330624F30D1_OFFSET UNITYSDK_OFFSET(0x65EE630)
#define CLASS_1_8F5A10ECD132BF05_METHOD_1_3306F24AC967FE79_OFFSET UNITYSDK_OFFSET(0x65ED3C0)
#define CLASS_1_8F5A10ECD132BF05_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x65EE230)
#define CLASS_1_8F5A10ECD132BF05_METHOD_1_68805403250CC013_OFFSET UNITYSDK_OFFSET(0x65EE880)
#define CLASS_1_8F5A10ECD132BF05_METHOD_1_6A85AE6A06078D6D_OFFSET UNITYSDK_OFFSET(0x65ED930)
#define CLASS_1_8F5A10ECD132BF05_METHOD_1_790CCDFF79165243_OFFSET UNITYSDK_OFFSET(0x65EE900)
#define CLASS_1_8F5A10ECD132BF05_METHOD_1_C54EB3F2B17FFBD7_OFFSET UNITYSDK_OFFSET(0x65ED5B0)
#define CLASS_1_8F5A10ECD132BF05_METHOD_1_D1E2CAB28D79B426_OFFSET UNITYSDK_OFFSET(0x65ED400)
#define CLASS_1_8F5A10ECD132BF05_METHOD_1_D683A2466D27C790_OFFSET UNITYSDK_OFFSET(0x65ED710)
#define CLASS_1_8F5A10ECD132BF05_METHOD_1_DE335353BA0B3974_OFFSET UNITYSDK_OFFSET(0x65EE2A0)
#define CLASS_1_8F5A10ECD132BF05_METHOD_1_DED5F4C96AEFB2EA_OFFSET UNITYSDK_OFFSET(0x65ED030)
#define CLASS_1_8F5A10ECD132BF05_METHOD_1_EADDF1782C977BCA_OFFSET UNITYSDK_OFFSET(0x65ED2A0)
#define CLASS_1_8F5A10ECD132BF05__CTOR_OFFSET UNITYSDK_OFFSET(0x65EC0B0)

inline static constexpr unsigned int Class_1_8F5A10ECD132BF05_TypeDefinitionIndex = 66839;

class Class_1_8F5A10ECD132BF05 : public ::System::Object
{
public:
	::Class_1_241E681AF3D7A598* Field_1_3; // 0x10
	::Class_1_A238E29B18A7ED1A* Field_1_4; // 0x18
	::Foundation::NativeMemory* Field_1_6; // 0x20
	::Foundation::Clamped_1<::System::Single> Field_1_7; // 0x28
	::System::Action* Field_1_11; // 0x40
	::Foundation::NativeVariable_1<::System::Single> Field_1_2; // 0x48
	::Struct_2_793645F2F9C6AFE4 Field_1_5; // 0x58
	::Foundation::ReadOnlyNativeVariable_1<::Foundation::Unreal::FTransform3D> Field_1_9; // 0x70
	::UnityEngine::Playables::PlayableGraph Field_1_1; // 0x80
	::Struct_2_2BF3DCBD364A6BA8 Field_1_10; // 0x90
	::System::Single Field_1_8; // 0xC0
	::System::Boolean Field_1_0; // 0xC4

	::System::Void _ctor(::MoleMole::Battle::Entity* a1, ::MoleMole::Photo::ScopedFrontCameraControlAnimationConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Photo::ScopedFrontCameraControlAnimationConfig*))((::PBYTE)hIl2Cpp + CLASS_1_8F5A10ECD132BF05__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F5A10ECD132BF05_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_DED5F4C96AEFB2EA(::UnityEngine::Playables::ScriptPlayable_1<::Class_2_6131ABC6B1EC5318*> a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::ScriptPlayable_1<::Class_2_6131ABC6B1EC5318*>))((::PBYTE)hIl2Cpp + CLASS_1_8F5A10ECD132BF05_METHOD_1_DED5F4C96AEFB2EA_OFFSET))(this, a1);
	}

	::System::Void Method_1_EADDF1782C977BCA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8F5A10ECD132BF05_METHOD_1_EADDF1782C977BCA_OFFSET))(this, a1);
	}

	::System::Void Method_1_3306F24AC967FE79()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F5A10ECD132BF05_METHOD_1_3306F24AC967FE79_OFFSET))(this);
	}

	::Foundation::Unreal::FTransform Method_1_D1E2CAB28D79B426()
	{
		return ((::Foundation::Unreal::FTransform(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F5A10ECD132BF05_METHOD_1_D1E2CAB28D79B426_OFFSET))(this);
	}

	::System::Void Method_1_C54EB3F2B17FFBD7(::Class_0_16E4307DCC419505_301<::Class_1_8F5A10ECD132BF05*>* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_301<::Class_1_8F5A10ECD132BF05*>*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8F5A10ECD132BF05_METHOD_1_C54EB3F2B17FFBD7_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_D683A2466D27C790(::Class_1_241E681AF3D7A598* a1, ::Class_1_A238E29B18A7ED1A* a2, ::Foundation::NativeVariable_1<::System::Single> a3, ::Struct_2_2BF3DCBD364A6BA8 a4, ::Foundation::ReadOnlyNativeVariable_1<::Foundation::Unreal::FTransform3D> a5, ::Struct_2_793645F2F9C6AFE4 a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_241E681AF3D7A598*, ::Class_1_A238E29B18A7ED1A*, ::Foundation::NativeVariable_1<::System::Single>, ::Struct_2_2BF3DCBD364A6BA8, ::Foundation::ReadOnlyNativeVariable_1<::Foundation::Unreal::FTransform3D>, ::Struct_2_793645F2F9C6AFE4))((::PBYTE)hIl2Cpp + CLASS_1_8F5A10ECD132BF05_METHOD_1_D683A2466D27C790_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_1_6A85AE6A06078D6D(::UnityEngine::Animator* a1, ::MoleMole::Photo::Skeleton* a2, ::MoleMole::Photo::ScopedFrontCameraControlAnimationConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animator*, ::MoleMole::Photo::Skeleton*, ::MoleMole::Photo::ScopedFrontCameraControlAnimationConfig*))((::PBYTE)hIl2Cpp + CLASS_1_8F5A10ECD132BF05_METHOD_1_6A85AE6A06078D6D_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F5A10ECD132BF05_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_DE335353BA0B3974(::UnityEngine::Playables::ScriptPlayable_1<::Class_2_6131ABC6B1EC5318*> a1, ::UnityEngine::Animations::AnimationScriptPlayable a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::ScriptPlayable_1<::Class_2_6131ABC6B1EC5318*>, ::UnityEngine::Animations::AnimationScriptPlayable))((::PBYTE)hIl2Cpp + CLASS_1_8F5A10ECD132BF05_METHOD_1_DE335353BA0B3974_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_304C5330624F30D1(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8F5A10ECD132BF05_METHOD_1_304C5330624F30D1_OFFSET))(this, a1);
	}

	::System::Void Method_1_68805403250CC013()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F5A10ECD132BF05_METHOD_1_68805403250CC013_OFFSET))(this);
	}

	::System::Void Method_1_790CCDFF79165243(::Class_0_16E4307DCC419505_301<::Class_1_8F5A10ECD132BF05*>* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_301<::Class_1_8F5A10ECD132BF05*>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8F5A10ECD132BF05_METHOD_1_790CCDFF79165243_OFFSET))(this, a1, a2);
	}
};
