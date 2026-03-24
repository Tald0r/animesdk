#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class IVideoPlayer; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Events { class UnityEvent; }
namespace UnityEngine::Video { class VideoClip; }

#define CLASS_1_A02EEEDBDD11A4F9_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x80BB630)
#define CLASS_1_A02EEEDBDD11A4F9_METHOD_1_29AF7E51FCF74CA6_OFFSET UNITYSDK_OFFSET(0x80BB730)
#define CLASS_1_A02EEEDBDD11A4F9_METHOD_1_37948B4219262697_OFFSET UNITYSDK_OFFSET(0x80BBE50)
#define CLASS_1_A02EEEDBDD11A4F9_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x80BB6B0)
#define CLASS_1_A02EEEDBDD11A4F9_METHOD_1_74146AD631A28261_OFFSET UNITYSDK_OFFSET(0x80BAFB0)
#define CLASS_1_A02EEEDBDD11A4F9_METHOD_1_8E517889CD7E9A7E_OFFSET UNITYSDK_OFFSET(0x80BAA50)
#define CLASS_1_A02EEEDBDD11A4F9_METHOD_1_907E24F785836BA0_OFFSET UNITYSDK_OFFSET(0x80BB030)
#define CLASS_1_A02EEEDBDD11A4F9_METHOD_1_B6E538F7A15EC4DF_1_OFFSET UNITYSDK_OFFSET(0x80BBDD0)
#define CLASS_1_A02EEEDBDD11A4F9_METHOD_1_B6E538F7A15EC4DF_OFFSET UNITYSDK_OFFSET(0x80BACF0)
#define CLASS_1_A02EEEDBDD11A4F9_METHOD_1_C57CEF9DCCFF0ABB_OFFSET UNITYSDK_OFFSET(0x80BA8C0)
#define CLASS_1_A02EEEDBDD11A4F9_METHOD_1_D24D637789CBE98D_OFFSET UNITYSDK_OFFSET(0x80BBC50)
#define CLASS_1_A02EEEDBDD11A4F9_METHOD_1_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x80BAD70)
#define CLASS_1_A02EEEDBDD11A4F9_METHOD_1_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x80BB580)
#define CLASS_1_A02EEEDBDD11A4F9__CCTOR_OFFSET UNITYSDK_OFFSET(0x80BA880)
#define CLASS_1_A02EEEDBDD11A4F9__CTOR_OFFSET UNITYSDK_OFFSET(0x80BA780)

inline static constexpr unsigned int Class_1_A02EEEDBDD11A4F9_TypeDefinitionIndex = 77848;

class Class_1_A02EEEDBDD11A4F9 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A02EEEDBDD11A4F9_TypeDefinitionIndex)->GetStaticField(0x9400);
	}
	::UnityEngine::Material* Field_1_5; // 0x10
	::UnityEngine::Events::UnityEvent* Field_1_2; // 0x18
	::UnityEngine::Events::UnityEvent* Field_1_0; // 0x20
	::Foundation::AssetRequestHandle Field_1_4; // 0x28
	::MoleMole::IVideoPlayer* Field_1_3; // 0x48
	::UnityEngine::Events::UnityEvent* Field_1_1; // 0x50

	::System::Void _ctor(::MoleMole::IVideoPlayer* a1, ::UnityEngine::Material* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_C57CEF9DCCFF0ABB(::System::Single a1, ::System::Action* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9_METHOD_1_C57CEF9DCCFF0ABB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B6E538F7A15EC4DF(::MoleMole::IVideoPlayer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9_METHOD_1_B6E538F7A15EC4DF_OFFSET))(this, a1);
	}

	::System::Void Method_1_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9_METHOD_1_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_1_74146AD631A28261(::MoleMole::IVideoPlayer* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9_METHOD_1_74146AD631A28261_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_907E24F785836BA0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9_METHOD_1_907E24F785836BA0_OFFSET))(this);
	}

	::System::Void Method_1_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9_METHOD_1_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_8E517889CD7E9A7E(::System::Single a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9_METHOD_1_8E517889CD7E9A7E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_29AF7E51FCF74CA6(::System::String* a1, ::System::Boolean a2, ::System::Action* a3, ::System::Action_1<::MoleMole::IVideoPlayer*>* a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action*, ::System::Action_1<::MoleMole::IVideoPlayer*>*))((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9_METHOD_1_29AF7E51FCF74CA6_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_D24D637789CBE98D(::UnityEngine::Video::VideoClip* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoClip*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9_METHOD_1_D24D637789CBE98D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B6E538F7A15EC4DF_1(::MoleMole::IVideoPlayer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9_METHOD_1_B6E538F7A15EC4DF_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_37948B4219262697(::System::String* a1, ::System::Boolean a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9_METHOD_1_37948B4219262697_OFFSET))(this, a1, a2, a3);
	}
};
