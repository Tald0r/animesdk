#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine { class IHasTextureRegion; }
namespace Spine { class Slot; }
namespace Spine { class TextureRegion; }
namespace System { class String; }

#define SPINE_SEQUENCE_APPLY_OFFSET UNITYSDK_OFFSET(0x1B041BD0)
#define SPINE_SEQUENCE_GETPATH_OFFSET UNITYSDK_OFFSET(0x1B0423C0)
#define SPINE_SEQUENCE_GET_DIGITS_OFFSET UNITYSDK_OFFSET(0x1B042210)
#define SPINE_SEQUENCE_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B042260)
#define SPINE_SEQUENCE_GET_REGIONS_OFFSET UNITYSDK_OFFSET(0x1B042250)
#define SPINE_SEQUENCE_GET_SETUPINDEX_OFFSET UNITYSDK_OFFSET(0x1B042230)
#define SPINE_SEQUENCE_GET_START_OFFSET UNITYSDK_OFFSET(0x1B0421F0)
#define SPINE_SEQUENCE_SET_DIGITS_OFFSET UNITYSDK_OFFSET(0x1B042220)
#define SPINE_SEQUENCE_SET_SETUPINDEX_OFFSET UNITYSDK_OFFSET(0x1B042240)
#define SPINE_SEQUENCE_SET_START_OFFSET UNITYSDK_OFFSET(0x1B042200)
#define SPINE_SEQUENCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B0424C0)
#define SPINE_SEQUENCE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B0414A0)
#define SPINE_SEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B042270)

namespace Spine
{
	inline static constexpr unsigned int Sequence_TypeDefinitionIndex = 29832;

	class Sequence : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_nextIdLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Sequence_TypeDefinitionIndex)->GetStaticField(0x232C0);
		}
		static ::System::Int32* StaticGet_nextID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Sequence_TypeDefinitionIndex)->GetStaticField(0x7850);
		}
		::Il2CppArray<::Spine::TextureRegion*>* regions; // 0x10
		::System::Int32 digits; // 0x18
		::System::Int32 start; // 0x1C
		::System::Int32 setupIndex; // 0x20
		::System::Int32 id; // 0x24

		::System::Void _ctor(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE__CTOR_OFFSET))(this, count);
		}

		::System::Void _ctor_1(::Spine::Sequence* other)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Sequence*))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_SEQUENCE__CCTOR_OFFSET))();
		}

		::System::Int32 get_Start()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_GET_START_OFFSET))(this);
		}

		::System::Void set_Start(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_SET_START_OFFSET))(this, value);
		}

		::System::Int32 get_Digits()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_GET_DIGITS_OFFSET))(this);
		}

		::System::Void set_Digits(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_SET_DIGITS_OFFSET))(this, value);
		}

		::System::Int32 get_SetupIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_GET_SETUPINDEX_OFFSET))(this);
		}

		::System::Void set_SetupIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_SET_SETUPINDEX_OFFSET))(this, value);
		}

		::Il2CppArray<::Spine::TextureRegion*>* get_Regions()
		{
			return ((::Il2CppArray<::Spine::TextureRegion*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_GET_REGIONS_OFFSET))(this);
		}

		::System::Int32 get_Id()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_GET_ID_OFFSET))(this);
		}

		::System::Void Apply(::Spine::Slot* slot, ::Spine::IHasTextureRegion* attachment)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Slot*, ::Spine::IHasTextureRegion*))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_APPLY_OFFSET))(this, slot, attachment);
		}

		::System::String* GetPath(::System::String* basePath, ::System::Int32 index)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_GETPATH_OFFSET))(this, basePath, index);
		}
	};
}
