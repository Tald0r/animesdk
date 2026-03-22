#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace DG::Tweening { class Tween; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class FXFog; }

#define CLASS_1_D63CA2666217B507_DISPOSE_OFFSET UNITYSDK_OFFSET(0x90BFCB0)
#define CLASS_1_D63CA2666217B507_METHOD_1_26E509975F92479C_OFFSET UNITYSDK_OFFSET(0x90C0040)
#define CLASS_1_D63CA2666217B507_METHOD_1_4FE6F14C55322AF4_OFFSET UNITYSDK_OFFSET(0x90C0460)
#define CLASS_1_D63CA2666217B507_METHOD_1_5F20CC84DF90008D_OFFSET UNITYSDK_OFFSET(0x90C10D0)
#define CLASS_1_D63CA2666217B507_METHOD_1_6D8C192E8452A9E8_OFFSET UNITYSDK_OFFSET(0x90C0AB0)
#define CLASS_1_D63CA2666217B507_METHOD_1_71AB010B5C68C5BF_OFFSET UNITYSDK_OFFSET(0x90C0790)
#define CLASS_1_D63CA2666217B507_METHOD_1_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0x90C0830)
#define CLASS_1_D63CA2666217B507_METHOD_1_8FAD57395F26ACC4_1_OFFSET UNITYSDK_OFFSET(0x90C0F90)
#define CLASS_1_D63CA2666217B507_METHOD_1_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x90C0970)
#define CLASS_1_D63CA2666217B507_METHOD_1_9765352E01408D38_OFFSET UNITYSDK_OFFSET(0x90C0210)
#define CLASS_1_D63CA2666217B507_METHOD_1_CB04A906D1A1380E_OFFSET UNITYSDK_OFFSET(0x90BFD30)
#define CLASS_1_D63CA2666217B507_METHOD_1_D1D4E84315AC2ED7_OFFSET UNITYSDK_OFFSET(0x90C03B0)
#define CLASS_1_D63CA2666217B507__CTOR_OFFSET UNITYSDK_OFFSET(0x90BFD20)

inline static constexpr unsigned int Class_1_D63CA2666217B507_TypeDefinitionIndex = 48438;

class Class_1_D63CA2666217B507 : public ::System::Object
{
public:
	::DG::Tweening::Tween* Field_1_1; // 0x10
	::UnityEngine::Rendering::Universal::FXFog* Field_1_0; // 0x18
	::DG::Tweening::Tween* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D63CA2666217B507__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D63CA2666217B507_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_CB04A906D1A1380E(::UnityEngine::Rendering::Volume* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + CLASS_1_D63CA2666217B507_METHOD_1_CB04A906D1A1380E_OFFSET))(this, a1);
	}

	static ::Class_1_D63CA2666217B507* Method_1_D1D4E84315AC2ED7(::UnityEngine::Rendering::Volume* a1)
	{
		return ((::Class_1_D63CA2666217B507*(*)(::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + CLASS_1_D63CA2666217B507_METHOD_1_D1D4E84315AC2ED7_OFFSET))(a1);
	}

	::System::Void Method_1_9765352E01408D38()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D63CA2666217B507_METHOD_1_9765352E01408D38_OFFSET))(this);
	}

	::System::Void Method_1_4FE6F14C55322AF4(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D63CA2666217B507_METHOD_1_4FE6F14C55322AF4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D63CA2666217B507_METHOD_1_8FAD57395F26ACC4_OFFSET))(this, a1);
	}

	::System::Void Method_1_6D8C192E8452A9E8(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D63CA2666217B507_METHOD_1_6D8C192E8452A9E8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_71AB010B5C68C5BF(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D63CA2666217B507_METHOD_1_71AB010B5C68C5BF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5F20CC84DF90008D(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D63CA2666217B507_METHOD_1_5F20CC84DF90008D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8FAD57395F26ACC4_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D63CA2666217B507_METHOD_1_8FAD57395F26ACC4_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_76CD9B9D1269FA90(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D63CA2666217B507_METHOD_1_76CD9B9D1269FA90_OFFSET))(this, a1);
	}

	::System::Void Method_1_26E509975F92479C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D63CA2666217B507_METHOD_1_26E509975F92479C_OFFSET))(this, a1);
	}
};
