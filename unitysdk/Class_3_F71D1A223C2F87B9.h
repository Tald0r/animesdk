#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0913CDAD1E2CC7E0.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_8A50BFB20D9D2482;
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityVignette; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class Vignette; }

#define CLASS_3_F71D1A223C2F87B9_METHOD_3_414F0AF51956DE20_OFFSET UNITYSDK_OFFSET(0x95108E0)
#define CLASS_3_F71D1A223C2F87B9_METHOD_3_4B9DBFC8428B015A_OFFSET UNITYSDK_OFFSET(0x9510870)
#define CLASS_3_F71D1A223C2F87B9_METHOD_3_5AC3864C6BA3BE3B_OFFSET UNITYSDK_OFFSET(0x950F490)
#define CLASS_3_F71D1A223C2F87B9_METHOD_3_60A1793BCE006FB1_OFFSET UNITYSDK_OFFSET(0x9510590)
#define CLASS_3_F71D1A223C2F87B9_METHOD_3_6D0092BF65C5AC1F_OFFSET UNITYSDK_OFFSET(0x950BEE0)
#define CLASS_3_F71D1A223C2F87B9_METHOD_3_AF3D51C0C4820425_OFFSET UNITYSDK_OFFSET(0x950E760)
#define CLASS_3_F71D1A223C2F87B9_METHOD_3_C517D1E49C803379_1_OFFSET UNITYSDK_OFFSET(0x9510860)
#define CLASS_3_F71D1A223C2F87B9_METHOD_3_C517D1E49C803379_OFFSET UNITYSDK_OFFSET(0x9510850)
#define CLASS_3_F71D1A223C2F87B9_METHOD_3_CC7841E04D5BC26D_OFFSET UNITYSDK_OFFSET(0x95108A0)
#define CLASS_3_F71D1A223C2F87B9_METHOD_3_CD7849764A507E10_OFFSET UNITYSDK_OFFSET(0x950C8D0)
#define CLASS_3_F71D1A223C2F87B9_METHOD_3_E917DA7598A51C17_1_OFFSET UNITYSDK_OFFSET(0x9510890)
#define CLASS_3_F71D1A223C2F87B9_METHOD_3_E917DA7598A51C17_OFFSET UNITYSDK_OFFSET(0x9510880)
#define CLASS_3_F71D1A223C2F87B9_METHOD_3_FD1183EF272AE482_OFFSET UNITYSDK_OFFSET(0x950AC60)
#define CLASS_3_F71D1A223C2F87B9_METHOD_3_FFCC0F6E802A34D6_OFFSET UNITYSDK_OFFSET(0x950D6E0)
#define CLASS_3_F71D1A223C2F87B9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x950FDB0)
#define CLASS_3_F71D1A223C2F87B9__CTOR_OFFSET UNITYSDK_OFFSET(0x950AB00)

inline static constexpr unsigned int Class_3_F71D1A223C2F87B9_TypeDefinitionIndex = 48075;

class Class_3_F71D1A223C2F87B9 : public ::Class_2_0913CDAD1E2CC7E0<::UnityEngine::Rendering::Universal::Vignette*, ::MoleMole::Config::ConfigEntityVignette*>
{
public:
	::MoleMole::TwoValue_1<::UnityEngine::Vector2>* Field_3_2; // 0xA8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_6; // 0xB0
	::MoleMole::TwoValue_1<::System::Boolean>* Field_3_8; // 0xB8
	::MoleMole::TwoValue_1<::System::Single>* Field_3_4; // 0xC0
	::MoleMole::TwoValue_1<::UnityEngine::Color>* Field_3_0; // 0xC8
	::UnityEngine::Color Field_3_1; // 0xD0
	::System::Single Field_3_7; // 0xE0
	::System::Single Field_3_5; // 0xE4
	::System::Boolean Field_3_9; // 0xE8
	::UnityEngine::Vector2 Field_3_3; // 0xEC

	::System::Void _ctor(::System::String* a1, ::MoleMole::Config::ConfigEntityVignette* a2, ::UnityEngine::Rendering::Volume* a3, ::MoleMole::Battle::Entity* a4, ::Class_1_8A50BFB20D9D2482* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityVignette*, ::UnityEngine::Rendering::Volume*, ::MoleMole::Battle::Entity*, ::Class_1_8A50BFB20D9D2482*))((::PBYTE)hIl2Cpp + CLASS_3_F71D1A223C2F87B9__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_FD1183EF272AE482(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Vignette* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Vignette*))((::PBYTE)hIl2Cpp + CLASS_3_F71D1A223C2F87B9_METHOD_3_FD1183EF272AE482_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_6D0092BF65C5AC1F(::UnityEngine::Rendering::Universal::Vignette* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Vignette*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F71D1A223C2F87B9_METHOD_3_6D0092BF65C5AC1F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_CD7849764A507E10(::UnityEngine::Rendering::Universal::Vignette* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Vignette*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F71D1A223C2F87B9_METHOD_3_CD7849764A507E10_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_FFCC0F6E802A34D6(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Vignette* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Vignette*))((::PBYTE)hIl2Cpp + CLASS_3_F71D1A223C2F87B9_METHOD_3_FFCC0F6E802A34D6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_AF3D51C0C4820425(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Vignette* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Vignette*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F71D1A223C2F87B9_METHOD_3_AF3D51C0C4820425_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_5AC3864C6BA3BE3B(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Vignette* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Vignette*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F71D1A223C2F87B9_METHOD_3_5AC3864C6BA3BE3B_OFFSET))(this, a1, a2, a3);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F71D1A223C2F87B9_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_3_60A1793BCE006FB1(::UnityEngine::Rendering::Universal::Vignette* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Vignette*))((::PBYTE)hIl2Cpp + CLASS_3_F71D1A223C2F87B9_METHOD_3_60A1793BCE006FB1_OFFSET))(this, a1);
	}

	::System::Void Method_3_C517D1E49C803379(::UnityEngine::Rendering::Universal::Vignette* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Vignette*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F71D1A223C2F87B9_METHOD_3_C517D1E49C803379_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_C517D1E49C803379_1(::UnityEngine::Rendering::Universal::Vignette* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Vignette*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F71D1A223C2F87B9_METHOD_3_C517D1E49C803379_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_4B9DBFC8428B015A(::UnityEngine::Rendering::Universal::Vignette* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Vignette*))((::PBYTE)hIl2Cpp + CLASS_3_F71D1A223C2F87B9_METHOD_3_4B9DBFC8428B015A_OFFSET))(this, a1);
	}

	::System::Void Method_3_E917DA7598A51C17(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Vignette* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Vignette*))((::PBYTE)hIl2Cpp + CLASS_3_F71D1A223C2F87B9_METHOD_3_E917DA7598A51C17_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_E917DA7598A51C17_1(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Vignette* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Vignette*))((::PBYTE)hIl2Cpp + CLASS_3_F71D1A223C2F87B9_METHOD_3_E917DA7598A51C17_1_OFFSET))(this, a1, a2);
	}

	::System::String* Method_3_CC7841E04D5BC26D()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F71D1A223C2F87B9_METHOD_3_CC7841E04D5BC26D_OFFSET))(this);
	}

	::System::Void Method_3_414F0AF51956DE20(::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* a1, ::UnityEngine::Rendering::Universal::Vignette* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP*, ::UnityEngine::Rendering::Universal::Vignette*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F71D1A223C2F87B9_METHOD_3_414F0AF51956DE20_OFFSET))(this, a1, a2, a3);
	}
};
