#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine { class BoneData; }
namespace Spine { class Skeleton; }
namespace Spine { template <typename T> class ExposedList_1; }
namespace System { class String; }

#define SPINE_BONE_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x1AFC6540)
#define SPINE_BONE_GET_APPLIEDROTATION_OFFSET UNITYSDK_OFFSET(0x1AFC6630)
#define SPINE_BONE_GET_ASCALEX_OFFSET UNITYSDK_OFFSET(0x1AFC6690)
#define SPINE_BONE_GET_ASCALEY_OFFSET UNITYSDK_OFFSET(0x1AFC66B0)
#define SPINE_BONE_GET_ASHEARX_OFFSET UNITYSDK_OFFSET(0x1AFC66D0)
#define SPINE_BONE_GET_ASHEARY_OFFSET UNITYSDK_OFFSET(0x1AFC66F0)
#define SPINE_BONE_GET_AX_OFFSET UNITYSDK_OFFSET(0x1AFC6650)
#define SPINE_BONE_GET_AY_OFFSET UNITYSDK_OFFSET(0x1AFC6670)
#define SPINE_BONE_GET_A_OFFSET UNITYSDK_OFFSET(0x1AFC6710)
#define SPINE_BONE_GET_B_OFFSET UNITYSDK_OFFSET(0x1AFC6730)
#define SPINE_BONE_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x1AFC6530)
#define SPINE_BONE_GET_C_OFFSET UNITYSDK_OFFSET(0x1AFC6750)
#define SPINE_BONE_GET_DATA_OFFSET UNITYSDK_OFFSET(0x1AFC6500)
#define SPINE_BONE_GET_D_OFFSET UNITYSDK_OFFSET(0x1AFC6770)
#define SPINE_BONE_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x1AFC6520)
#define SPINE_BONE_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1AFC6590)
#define SPINE_BONE_GET_SCALEX_OFFSET UNITYSDK_OFFSET(0x1AFC65B0)
#define SPINE_BONE_GET_SCALEY_OFFSET UNITYSDK_OFFSET(0x1AFC65D0)
#define SPINE_BONE_GET_SHEARX_OFFSET UNITYSDK_OFFSET(0x1AFC65F0)
#define SPINE_BONE_GET_SHEARY_OFFSET UNITYSDK_OFFSET(0x1AFC6610)
#define SPINE_BONE_GET_SKELETON_OFFSET UNITYSDK_OFFSET(0x1AFC6510)
#define SPINE_BONE_GET_WORLDROTATIONX_OFFSET UNITYSDK_OFFSET(0x1AFC67D0)
#define SPINE_BONE_GET_WORLDROTATIONY_OFFSET UNITYSDK_OFFSET(0x1AFC6850)
#define SPINE_BONE_GET_WORLDSCALEX_OFFSET UNITYSDK_OFFSET(0x1AFC68D0)
#define SPINE_BONE_GET_WORLDSCALEY_OFFSET UNITYSDK_OFFSET(0x1AFC6900)
#define SPINE_BONE_GET_WORLDTOLOCALROTATIONX_OFFSET UNITYSDK_OFFSET(0x1AFC7D30)
#define SPINE_BONE_GET_WORLDTOLOCALROTATIONY_OFFSET UNITYSDK_OFFSET(0x1AFC7E30)
#define SPINE_BONE_GET_WORLDX_OFFSET UNITYSDK_OFFSET(0x1AFC6790)
#define SPINE_BONE_GET_WORLDY_OFFSET UNITYSDK_OFFSET(0x1AFC67B0)
#define SPINE_BONE_GET_X_OFFSET UNITYSDK_OFFSET(0x1AFC6550)
#define SPINE_BONE_GET_Y_OFFSET UNITYSDK_OFFSET(0x1AFC6570)
#define SPINE_BONE_LOCALTOWORLDROTATION_OFFSET UNITYSDK_OFFSET(0x1AFC8020)
#define SPINE_BONE_LOCALTOWORLD_OFFSET UNITYSDK_OFFSET(0x1AFC7CF0)
#define SPINE_BONE_ROTATEWORLD_OFFSET UNITYSDK_OFFSET(0x1AFC8110)
#define SPINE_BONE_SETTOSETUPPOSE_OFFSET UNITYSDK_OFFSET(0x1AFC6A70)
#define SPINE_BONE_SET_APPLIEDROTATION_OFFSET UNITYSDK_OFFSET(0x1AFC6640)
#define SPINE_BONE_SET_ASCALEX_OFFSET UNITYSDK_OFFSET(0x1AFC66A0)
#define SPINE_BONE_SET_ASCALEY_OFFSET UNITYSDK_OFFSET(0x1AFC66C0)
#define SPINE_BONE_SET_ASHEARX_OFFSET UNITYSDK_OFFSET(0x1AFC66E0)
#define SPINE_BONE_SET_ASHEARY_OFFSET UNITYSDK_OFFSET(0x1AFC6700)
#define SPINE_BONE_SET_AX_OFFSET UNITYSDK_OFFSET(0x1AFC6660)
#define SPINE_BONE_SET_AY_OFFSET UNITYSDK_OFFSET(0x1AFC6680)
#define SPINE_BONE_SET_A_OFFSET UNITYSDK_OFFSET(0x1AFC6720)
#define SPINE_BONE_SET_B_OFFSET UNITYSDK_OFFSET(0x1AFC6740)
#define SPINE_BONE_SET_C_OFFSET UNITYSDK_OFFSET(0x1AFC6760)
#define SPINE_BONE_SET_D_OFFSET UNITYSDK_OFFSET(0x1AFC6780)
#define SPINE_BONE_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1AFC65A0)
#define SPINE_BONE_SET_SCALEX_OFFSET UNITYSDK_OFFSET(0x1AFC65C0)
#define SPINE_BONE_SET_SCALEY_OFFSET UNITYSDK_OFFSET(0x1AFC65E0)
#define SPINE_BONE_SET_SHEARX_OFFSET UNITYSDK_OFFSET(0x1AFC6600)
#define SPINE_BONE_SET_SHEARY_OFFSET UNITYSDK_OFFSET(0x1AFC6620)
#define SPINE_BONE_SET_WORLDX_OFFSET UNITYSDK_OFFSET(0x1AFC67A0)
#define SPINE_BONE_SET_WORLDY_OFFSET UNITYSDK_OFFSET(0x1AFC67C0)
#define SPINE_BONE_SET_X_OFFSET UNITYSDK_OFFSET(0x1AFC6560)
#define SPINE_BONE_SET_Y_OFFSET UNITYSDK_OFFSET(0x1AFC6580)
#define SPINE_BONE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AFC8230)
#define SPINE_BONE_UPDATEAPPLIEDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1AFC7870)
#define SPINE_BONE_UPDATEWORLDTRANSFORM_1_OFFSET UNITYSDK_OFFSET(0x1AFC6C80)
#define SPINE_BONE_UPDATEWORLDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1AFC7810)
#define SPINE_BONE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1AFC6C20)
#define SPINE_BONE_WORLDTOLOCALROTATION_OFFSET UNITYSDK_OFFSET(0x1AFC7F30)
#define SPINE_BONE_WORLDTOLOCAL_OFFSET UNITYSDK_OFFSET(0x1AFC7C80)
#define SPINE_BONE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AFC6AE0)
#define SPINE_BONE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFC6930)

namespace Spine
{
	inline static constexpr unsigned int Bone_TypeDefinitionIndex = 29836;

	class Bone : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_yDown()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Bone_TypeDefinitionIndex)->GetStaticField(0x7830);
		}
		::Spine::Bone* parent; // 0x10
		::Spine::ExposedList_1<::Spine::Bone*>* children; // 0x18
		::Spine::Skeleton* skeleton; // 0x20
		::Spine::BoneData* data; // 0x28
		::System::Boolean sorted; // 0x30
		::System::Boolean active; // 0x31
		::System::Single ascaleX; // 0x34
		::System::Single shearX; // 0x38
		::System::Single worldY; // 0x3C
		::System::Single ay; // 0x40
		::System::Single shearY; // 0x44
		::System::Single scaleY; // 0x48
		::System::Single c; // 0x4C
		::System::Single ax; // 0x50
		::System::Single arotation; // 0x54
		::System::Single d; // 0x58
		::System::Single b; // 0x5C
		::System::Single ascaleY; // 0x60
		::System::Single y; // 0x64
		::System::Single worldX; // 0x68
		::System::Single x; // 0x6C
		::System::Single ashearX; // 0x70
		::System::Single ashearY; // 0x74
		::System::Single rotation; // 0x78
		::System::Single a; // 0x7C
		::System::Single scaleX; // 0x80

		::System::Void _ctor(::Spine::BoneData* data, ::Spine::Skeleton* skeleton, ::Spine::Bone* parent)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::BoneData*, ::Spine::Skeleton*, ::Spine::Bone*))((::PBYTE)hIl2Cpp + SPINE_BONE__CTOR_OFFSET))(this, data, skeleton, parent);
		}

		::System::Void _ctor_1(::Spine::Bone* bone, ::Spine::Skeleton* skeleton, ::Spine::Bone* parent)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Bone*, ::Spine::Skeleton*, ::Spine::Bone*))((::PBYTE)hIl2Cpp + SPINE_BONE__CTOR_1_OFFSET))(this, bone, skeleton, parent);
		}

		::Spine::BoneData* get_Data()
		{
			return ((::Spine::BoneData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_DATA_OFFSET))(this);
		}

		::Spine::Skeleton* get_Skeleton()
		{
			return ((::Spine::Skeleton*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_SKELETON_OFFSET))(this);
		}

		::Spine::Bone* get_Parent()
		{
			return ((::Spine::Bone*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_PARENT_OFFSET))(this);
		}

		::Spine::ExposedList_1<::Spine::Bone*>* get_Children()
		{
			return ((::Spine::ExposedList_1<::Spine::Bone*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_CHILDREN_OFFSET))(this);
		}

		::System::Boolean get_Active()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_ACTIVE_OFFSET))(this);
		}

		::System::Single get_X()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_X_OFFSET))(this);
		}

		::System::Void set_X(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_X_OFFSET))(this, value);
		}

		::System::Single get_Y()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_Y_OFFSET))(this);
		}

		::System::Void set_Y(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_Y_OFFSET))(this, value);
		}

		::System::Single get_Rotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_Rotation(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_ROTATION_OFFSET))(this, value);
		}

		::System::Single get_ScaleX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_SCALEX_OFFSET))(this);
		}

		::System::Void set_ScaleX(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_SCALEX_OFFSET))(this, value);
		}

		::System::Single get_ScaleY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_SCALEY_OFFSET))(this);
		}

		::System::Void set_ScaleY(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_SCALEY_OFFSET))(this, value);
		}

		::System::Single get_ShearX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_SHEARX_OFFSET))(this);
		}

		::System::Void set_ShearX(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_SHEARX_OFFSET))(this, value);
		}

		::System::Single get_ShearY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_SHEARY_OFFSET))(this);
		}

		::System::Void set_ShearY(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_SHEARY_OFFSET))(this, value);
		}

		::System::Single get_AppliedRotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_APPLIEDROTATION_OFFSET))(this);
		}

		::System::Void set_AppliedRotation(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_APPLIEDROTATION_OFFSET))(this, value);
		}

		::System::Single get_AX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_AX_OFFSET))(this);
		}

		::System::Void set_AX(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_AX_OFFSET))(this, value);
		}

		::System::Single get_AY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_AY_OFFSET))(this);
		}

		::System::Void set_AY(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_AY_OFFSET))(this, value);
		}

		::System::Single get_AScaleX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_ASCALEX_OFFSET))(this);
		}

		::System::Void set_AScaleX(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_ASCALEX_OFFSET))(this, value);
		}

		::System::Single get_AScaleY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_ASCALEY_OFFSET))(this);
		}

		::System::Void set_AScaleY(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_ASCALEY_OFFSET))(this, value);
		}

		::System::Single get_AShearX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_ASHEARX_OFFSET))(this);
		}

		::System::Void set_AShearX(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_ASHEARX_OFFSET))(this, value);
		}

		::System::Single get_AShearY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_ASHEARY_OFFSET))(this);
		}

		::System::Void set_AShearY(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_ASHEARY_OFFSET))(this, value);
		}

		::System::Single get_A()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_A_OFFSET))(this);
		}

		::System::Void set_A(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_A_OFFSET))(this, value);
		}

		::System::Single get_B()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_B_OFFSET))(this);
		}

		::System::Void set_B(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_B_OFFSET))(this, value);
		}

		::System::Single get_C()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_C_OFFSET))(this);
		}

		::System::Void set_C(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_C_OFFSET))(this, value);
		}

		::System::Single get_D()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_D_OFFSET))(this);
		}

		::System::Void set_D(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_D_OFFSET))(this, value);
		}

		::System::Single get_WorldX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_WORLDX_OFFSET))(this);
		}

		::System::Void set_WorldX(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_WORLDX_OFFSET))(this, value);
		}

		::System::Single get_WorldY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_WORLDY_OFFSET))(this);
		}

		::System::Void set_WorldY(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONE_SET_WORLDY_OFFSET))(this, value);
		}

		::System::Single get_WorldRotationX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_WORLDROTATIONX_OFFSET))(this);
		}

		::System::Single get_WorldRotationY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_WORLDROTATIONY_OFFSET))(this);
		}

		::System::Single get_WorldScaleX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_WORLDSCALEX_OFFSET))(this);
		}

		::System::Single get_WorldScaleY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_WORLDSCALEY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateWorldTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_UPDATEWORLDTRANSFORM_OFFSET))(this);
		}

		::System::Void UpdateWorldTransform_1(::System::Single x, ::System::Single y, ::System::Single rotation, ::System::Single scaleX, ::System::Single scaleY, ::System::Single shearX, ::System::Single shearY)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONE_UPDATEWORLDTRANSFORM_1_OFFSET))(this, x, y, rotation, scaleX, scaleY, shearX, shearY);
		}

		::System::Void SetToSetupPose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_SETTOSETUPPOSE_OFFSET))(this);
		}

		::System::Void UpdateAppliedTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_UPDATEAPPLIEDTRANSFORM_OFFSET))(this);
		}

		::System::Void WorldToLocal(::System::Single worldX, ::System::Single worldY, ::System::Single& localX, ::System::Single& localY)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + SPINE_BONE_WORLDTOLOCAL_OFFSET))(this, worldX, worldY, localX, localY);
		}

		::System::Void LocalToWorld(::System::Single localX, ::System::Single localY, ::System::Single& worldX, ::System::Single& worldY)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + SPINE_BONE_LOCALTOWORLD_OFFSET))(this, localX, localY, worldX, worldY);
		}

		::System::Single get_WorldToLocalRotationX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_WORLDTOLOCALROTATIONX_OFFSET))(this);
		}

		::System::Single get_WorldToLocalRotationY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_GET_WORLDTOLOCALROTATIONY_OFFSET))(this);
		}

		::System::Single WorldToLocalRotation(::System::Single worldRotation)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONE_WORLDTOLOCALROTATION_OFFSET))(this, worldRotation);
		}

		::System::Single LocalToWorldRotation(::System::Single localRotation)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONE_LOCALTOWORLDROTATION_OFFSET))(this, localRotation);
		}

		::System::Void RotateWorld(::System::Single degrees)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONE_ROTATEWORLD_OFFSET))(this, degrees);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONE_TOSTRING_OFFSET))(this);
		}
	};
}
