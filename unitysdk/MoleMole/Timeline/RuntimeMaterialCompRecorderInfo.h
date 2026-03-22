#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Keyframe.h"
#include "unitysdk/UnityEngine/Timeline/KFrameFieldType.h"

namespace MoleMole::Timeline { class AttrKeyFrames; }
namespace MoleMole::Timeline { class KeyframeMBP; }
namespace MoleMole::Timeline { class RuntimeMaterialInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0xD83B310)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_GET_FRAMEATTRS_OFFSET UNITYSDK_OFFSET(0xD83A600)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_GET_INSTANCEMATERIALS_OFFSET UNITYSDK_OFFSET(0xD83A3D0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0xD83B2F0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_03BFDB1C3240A55A_OFFSET UNITYSDK_OFFSET(0xD83B950)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_1AF357BC8EC348BD_OFFSET UNITYSDK_OFFSET(0xD83BB90)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_22E26A255EB831DA_OFFSET UNITYSDK_OFFSET(0xD83F270)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_277F8930086803D1_OFFSET UNITYSDK_OFFSET(0xD83E420)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_2D331162118AACA5_OFFSET UNITYSDK_OFFSET(0xD83D6A0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_493D6328E01546D4_OFFSET UNITYSDK_OFFSET(0xD83EF30)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_4DC7D80C2275A666_OFFSET UNITYSDK_OFFSET(0xD83DC70)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_4F7257DB3153C8CF_OFFSET UNITYSDK_OFFSET(0xD83EE80)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_57149EFD880E9414_OFFSET UNITYSDK_OFFSET(0xD83B380)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_614D893906E2A775_OFFSET UNITYSDK_OFFSET(0xD83E690)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_652F3820D8B242FF_OFFSET UNITYSDK_OFFSET(0xD83F410)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_72DCA587D9B741B5_OFFSET UNITYSDK_OFFSET(0xD83B790)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_749CA2576B2ED62D_OFFSET UNITYSDK_OFFSET(0xD83CD30)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_7BB5F5F4EFB4FA9A_OFFSET UNITYSDK_OFFSET(0xD83EAF0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_90CE536D92651230_OFFSET UNITYSDK_OFFSET(0xD83AF00)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_9339CF0298A5CC7D_OFFSET UNITYSDK_OFFSET(0xD83CAD0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_990B4432466915BC_OFFSET UNITYSDK_OFFSET(0xD83BD20)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_ABBCFE8E4A0717AE_OFFSET UNITYSDK_OFFSET(0xD83C7B0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_AD55443DF1E11181_OFFSET UNITYSDK_OFFSET(0xD83CDB0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_C27445BF0EA312D1_OFFSET UNITYSDK_OFFSET(0xD83DA10)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_C830CA5B31AAFAEB_OFFSET UNITYSDK_OFFSET(0xD83F640)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_EE7339DA6ECF5F6D_OFFSET UNITYSDK_OFFSET(0xD83B7F0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_FBD12382B8568056_OFFSET UNITYSDK_OFFSET(0xD83C840)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0xD83B340)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xD83AD70)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int RuntimeMaterialCompRecorderInfo_TypeDefinitionIndex = 68199;

	class RuntimeMaterialCompRecorderInfo : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_layerIdColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialCompRecorderInfo_TypeDefinitionIndex)->GetStaticField(0x107A0);
		}
		// static const ::System::Single mixDeltaFloat; // 0x0
		// static const ::System::String* MultiMaterialKey; // 0x0
		// static const ::System::String* MultiMaterialPattern; // 0x0
		::UnityEngine::Timeline::TimelineClip* TimelineClip; // 0x10
		::UnityEngine::Renderer* MeshRenderer; // 0x18
		::Il2CppArray<::UnityEngine::Material*>* sourceMaterials; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::Timeline::RuntimeMaterialInfo*>* UpdateMeshRenderers; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Keyframe>*>* _frameAttrs; // 0x30
		::System::Collections::Generic::List_1<::MoleMole::Timeline::AttrKeyFrames*>* frameAttrsList; // 0x38

		::System::Void _ctor(::UnityEngine::Renderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO__CCTOR_OFFSET))();
		}

		::System::Collections::Generic::List_1<::UnityEngine::Material*>* get_instanceMaterials()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_GET_INSTANCEMATERIALS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Keyframe>*>* get_FrameAttrs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Keyframe>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_GET_FRAMEATTRS_OFFSET))(this);
		}

		::System::Double get_startTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_GET_STARTTIME_OFFSET))(this);
		}

		::System::Double get_endTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_GET_ENDTIME_OFFSET))(this);
		}

		::System::Void Method_1_57149EFD880E9414(::UnityEngine::Renderer* a1, ::UnityEngine::Timeline::TimelineClip* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_57149EFD880E9414_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_EE7339DA6ECF5F6D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_EE7339DA6ECF5F6D_OFFSET))(this);
		}

		::System::Void Method_1_90CE536D92651230(::System::Boolean a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_90CE536D92651230_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_1AF357BC8EC348BD(::UnityEngine::Renderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_1AF357BC8EC348BD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>* Method_1_990B4432466915BC(::System::Double a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*(*)(::PVOID, ::System::Double, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_990B4432466915BC_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_FBD12382B8568056(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_FBD12382B8568056_OFFSET))(this, a1);
		}

		::System::Void Method_1_9339CF0298A5CC7D(::UnityEngine::Renderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_9339CF0298A5CC7D_OFFSET))(this, a1);
		}

		::System::Void Method_1_749CA2576B2ED62D(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Double a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_749CA2576B2ED62D_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>* Method_1_ABBCFE8E4A0717AE(::System::Int32 a1, ::System::Double a2, ::System::Boolean a3)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*(*)(::PVOID, ::System::Int32, ::System::Double, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_ABBCFE8E4A0717AE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_2D331162118AACA5(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_2D331162118AACA5_OFFSET))(this, a1);
		}

		::System::Void Method_1_C27445BF0EA312D1(::System::Int32 a1, ::System::String* a2, ::UnityEngine::Timeline::KFrameFieldType a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::UnityEngine::Timeline::KFrameFieldType))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_C27445BF0EA312D1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_03BFDB1C3240A55A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_03BFDB1C3240A55A_OFFSET))(this);
		}

		::System::Void Method_1_4DC7D80C2275A666(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Keyframe>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Keyframe>*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_4DC7D80C2275A666_OFFSET))(this, a1);
		}

		::System::Void Method_1_277F8930086803D1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_277F8930086803D1_OFFSET))(this);
		}

		::System::Void Method_1_614D893906E2A775(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_614D893906E2A775_OFFSET))(this, a1);
		}

		::System::Void Method_1_7BB5F5F4EFB4FA9A(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_7BB5F5F4EFB4FA9A_OFFSET))(this, a1);
		}

		static ::System::Boolean Method_1_72DCA587D9B741B5(::UnityEngine::Material* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_72DCA587D9B741B5_OFFSET))(a1);
		}

		static ::System::String* Method_1_4F7257DB3153C8CF(::System::Int32 a1)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_4F7257DB3153C8CF_OFFSET))(a1);
		}

		::System::Void Method_1_493D6328E01546D4(::UnityEngine::Renderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_493D6328E01546D4_OFFSET))(this, a1);
		}

		::System::Void Method_1_652F3820D8B242FF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_652F3820D8B242FF_OFFSET))(this);
		}

		static ::System::Boolean Method_1_C830CA5B31AAFAEB(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_C830CA5B31AAFAEB_OFFSET))(a1, a2);
		}

		::System::Int32 Method_1_22E26A255EB831DA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_22E26A255EB831DA_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>* Method_1_AD55443DF1E11181(::System::Int32 a1, ::System::Double a2)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*(*)(::PVOID, ::System::Int32, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_METHOD_1_AD55443DF1E11181_OFFSET))(this, a1, a2);
		}
	};
}
