#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENPCAvatarBodyPart.h"
#include "unitysdk/ENPCAvatarGender.h"
#include "unitysdk/ENPCAvatarSize.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCAVATARDEFINE_COMBINEGENDERSIZEBYID_OFFSET UNITYSDK_OFFSET(0x5DF0EB0)
#define NPCAVATARDEFINE_GETBODYINFOFROMNAME_OFFSET UNITYSDK_OFFSET(0x5DF1780)
#define NPCAVATARDEFINE_GETBODYPARTTYPEFROMNAME_OFFSET UNITYSDK_OFFSET(0x5DF1B30)
#define NPCAVATARDEFINE_GETGPUPARTNAMEBYPARTENUM_OFFSET UNITYSDK_OFFSET(0x5DF0980)
#define NPCAVATARDEFINE_GETPARTBLENDSHAPEANIMNAME_OFFSET UNITYSDK_OFFSET(0x5DF2230)
#define NPCAVATARDEFINE_GETPARTLOD0MESHNAME_OFFSET UNITYSDK_OFFSET(0x5DF1D90)
#define NPCAVATARDEFINE_GETPARTNAMEBYPARTENUM_OFFSET UNITYSDK_OFFSET(0x5DF07C0)
#define NPCAVATARDEFINE_GETPARTOVERRIDEID_OFFSET UNITYSDK_OFFSET(0x5DF0D10)
#define NPCAVATARDEFINE_GETPARTSID_OFFSET UNITYSDK_OFFSET(0x5DF0B40)
#define NPCAVATARDEFINE_GETPUREBODYPARTTYPEFROMNAME_OFFSET UNITYSDK_OFFSET(0x5DF12D0)
#define NPCAVATARDEFINE_GETRANDOMNPCID_OFFSET UNITYSDK_OFFSET(0x5DF1190)
#define NPCAVATARDEFINE_ISINBAKEDGPUANIMATIONWHITELIST_OFFSET UNITYSDK_OFFSET(0x5DF03E0)
#define NPCAVATARDEFINE_ISINSTANDARDDEVICESIZELIST_OFFSET UNITYSDK_OFFSET(0x5DF05D0)
#define NPCAVATARDEFINE_ISRANDOMNPC_OFFSET UNITYSDK_OFFSET(0x5DF1000)
#define NPCAVATARDEFINE_ISUSEEXTRASIMPLEMESH_OFFSET UNITYSDK_OFFSET(0x5DF0330)
#define NPCAVATARDEFINE_PARSEBODYPARTTYPEBYID_OFFSET UNITYSDK_OFFSET(0x5DF0E10)
#define NPCAVATARDEFINE_PARSEGENDERSIZEBYID_OFFSET UNITYSDK_OFFSET(0x5DF0F20)
#define NPCAVATARDEFINE_PARSENUMBYID_OFFSET UNITYSDK_OFFSET(0x5DF1100)
#define NPCAVATARDEFINE_SPLITPARTOVERRIDEINFOID_OFFSET UNITYSDK_OFFSET(0x5DF0D80)
#define NPCAVATARDEFINE_SPLITPARTSID_OFFSET UNITYSDK_OFFSET(0x5DF0BD0)
#define NPCAVATARDEFINE__CCTOR_OFFSET UNITYSDK_OFFSET(0x5DF2360)

inline static constexpr unsigned int NPCAvatarDefine_TypeDefinitionIndex = 45499;

struct alignas(1) NPCAvatarDefine
{
	static ::System::String** StaticGet_Name_GPU_BodyPart_Body()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x30740);
	}
	static ::System::String** StaticGet_Name_BodyPart_Body()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x30748);
	}
	static ::System::String** StaticGet_Name_BodyPart_Beard()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x30750);
	}
	static ::System::String** StaticGet_Name_GPU_BodyPart_Beard()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x30758);
	}
	static ::System::String** StaticGet_Name_GPU_BodyPart_Eyebrow()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x30760);
	}
	static ::System::String** StaticGet_Name_GPU_BodyPart_Ear()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x30768);
	}
	static ::System::String** StaticGet_Name_GPU_BodyPart_Eye()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x30770);
	}
	static ::System::String** StaticGet_Name_BodyPart_Eyebrow()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x30778);
	}
	static ::System::String** StaticGet_Name_BodyPart_Screen()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x30780);
	}
	static ::System::String** StaticGet_Name_BodyPart_Hair()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x30788);
	}
	static ::System::Collections::Generic::List_1<::System::Tuple_2<::ENPCAvatarGender, ::ENPCAvatarSize>*>** StaticGet_BakedGPUAnimationWhiteList()
	{
		return (::System::Collections::Generic::List_1<::System::Tuple_2<::ENPCAvatarGender, ::ENPCAvatarSize>*>**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x30790);
	}
	static ::System::String** StaticGet_Name_BodyPart_Ear()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x30798);
	}
	static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_Name_GPU_AllBodyParts()
	{
		return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x307A0);
	}
	static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_Name_AllBodyParts()
	{
		return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x307A8);
	}
	static ::System::String** StaticGet_Name_BodyPart_Eye()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x307B0);
	}
	static ::System::String** StaticGet_Name_GPU_BodyPart_Screen()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x307B8);
	}
	static ::System::String** StaticGet_Name_BodyPart_Tail()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x307C0);
	}
	static ::System::String** StaticGet_Name_GPU_BodyPart_Hair()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x307C8);
	}
	static ::System::Collections::Generic::List_1<::ENPCAvatarBodyPart>** StaticGet_BlendShapePartTypes()
	{
		return (::System::Collections::Generic::List_1<::ENPCAvatarBodyPart>**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x307D0);
	}
	static ::System::String** StaticGet_Name_GPU_BodyPart_Clothes()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x307D8);
	}
	static ::System::String** StaticGet_Name_BodyPart_Face()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x307E0);
	}
	static ::System::String** StaticGet_Name_BodyPart_Clothes()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x307E8);
	}
	static ::System::Collections::Generic::List_1<::ENPCAvatarBodyPart>** StaticGet_AllBodyPartEnums()
	{
		return (::System::Collections::Generic::List_1<::ENPCAvatarBodyPart>**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x307F0);
	}
	static ::System::Collections::Generic::List_1<::System::Tuple_2<::ENPCAvatarGender, ::ENPCAvatarSize>*>** StaticGet_StandardDeviceSizeList()
	{
		return (::System::Collections::Generic::List_1<::System::Tuple_2<::ENPCAvatarGender, ::ENPCAvatarSize>*>**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x307F8);
	}
	static ::System::String** StaticGet_Name_GPU_BodyPart_Tail()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x30800);
	}
	static ::System::String** StaticGet_Name_GPU_BodyPart_Face()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0x30808);
	}
	static ::System::Boolean* StaticGet_bUseSceneExtraSimpleMesh()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0xBA80);
	}
	static ::System::Boolean* StaticGet_bUseExtraSimpleMesh()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0xBA81);
	}
	static ::System::Single* StaticGet_FadeOutTime()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0xBA84);
	}
	static ::System::Int32* StaticGet_RandomNpcCountBase()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0xBA88);
	}
	static ::System::Single* StaticGet_FadeInTime()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarDefine_TypeDefinitionIndex)->GetStaticField(0xBA8C);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCAVATARDEFINE__CCTOR_OFFSET))();
	}

	static ::System::Boolean IsUseExtraSimpleMesh(::ENPCAvatarGender gender, ::ENPCAvatarSize size)
	{
		return ((::System::Boolean(*)(::ENPCAvatarGender, ::ENPCAvatarSize))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_ISUSEEXTRASIMPLEMESH_OFFSET))(gender, size);
	}

	static ::System::Boolean IsInBakedGPUAnimationWhiteList(::ENPCAvatarGender gender, ::ENPCAvatarSize size)
	{
		return ((::System::Boolean(*)(::ENPCAvatarGender, ::ENPCAvatarSize))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_ISINBAKEDGPUANIMATIONWHITELIST_OFFSET))(gender, size);
	}

	static ::System::Boolean IsInStandardDeviceSizeList(::ENPCAvatarGender gender, ::ENPCAvatarSize size)
	{
		return ((::System::Boolean(*)(::ENPCAvatarGender, ::ENPCAvatarSize))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_ISINSTANDARDDEVICESIZELIST_OFFSET))(gender, size);
	}

	static ::System::String* GetPartNameByPartEnum(::ENPCAvatarBodyPart part)
	{
		return ((::System::String*(*)(::ENPCAvatarBodyPart))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_GETPARTNAMEBYPARTENUM_OFFSET))(part);
	}

	static ::System::String* GetGPUPartNameByPartEnum(::ENPCAvatarBodyPart part)
	{
		return ((::System::String*(*)(::ENPCAvatarBodyPart))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_GETGPUPARTNAMEBYPARTENUM_OFFSET))(part);
	}

	static ::System::Int32 GetPartsID(::ENPCAvatarGender gender, ::ENPCAvatarSize size, ::ENPCAvatarBodyPart part, ::System::Int32 number)
	{
		return ((::System::Int32(*)(::ENPCAvatarGender, ::ENPCAvatarSize, ::ENPCAvatarBodyPart, ::System::Int32))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_GETPARTSID_OFFSET))(gender, size, part, number);
	}

	static ::System::Void SplitPartsID(::System::Int32 id, ::ENPCAvatarGender& gender, ::ENPCAvatarSize& size, ::ENPCAvatarBodyPart& part, ::System::Int32& number)
	{
		return ((::System::Void(*)(::System::Int32, ::ENPCAvatarGender&, ::ENPCAvatarSize&, ::ENPCAvatarBodyPart&, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_SPLITPARTSID_OFFSET))(id, gender, size, part, number);
	}

	static ::System::Int32 GetPartOverrideId(::ENPCAvatarBodyPart part, ::System::Int32 number)
	{
		return ((::System::Int32(*)(::ENPCAvatarBodyPart, ::System::Int32))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_GETPARTOVERRIDEID_OFFSET))(part, number);
	}

	static ::System::Void SplitPartOverrideInfoId(::System::Int32 id, ::ENPCAvatarBodyPart& part, ::System::Int32& number)
	{
		return ((::System::Void(*)(::System::Int32, ::ENPCAvatarBodyPart&, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_SPLITPARTOVERRIDEINFOID_OFFSET))(id, part, number);
	}

	static ::System::Void ParseBodyPartTypeById(::System::Int32 id, ::ENPCAvatarBodyPart& part)
	{
		return ((::System::Void(*)(::System::Int32, ::ENPCAvatarBodyPart&))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_PARSEBODYPARTTYPEBYID_OFFSET))(id, part);
	}

	static ::System::Int32 CombineGenderSizeById(::ENPCAvatarGender gender, ::ENPCAvatarSize size)
	{
		return ((::System::Int32(*)(::ENPCAvatarGender, ::ENPCAvatarSize))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_COMBINEGENDERSIZEBYID_OFFSET))(gender, size);
	}

	static ::System::Void ParseGenderSizeById(::System::Int32 id, ::ENPCAvatarGender& gender, ::ENPCAvatarSize& size)
	{
		return ((::System::Void(*)(::System::Int32, ::ENPCAvatarGender&, ::ENPCAvatarSize&))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_PARSEGENDERSIZEBYID_OFFSET))(id, gender, size);
	}

	static ::System::Boolean IsRandomNPC(::System::Int32 id)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_ISRANDOMNPC_OFFSET))(id);
	}

	static ::System::Int32 GetRandomNPCId(::ENPCAvatarGender gender, ::ENPCAvatarSize size, ::System::Int32 number)
	{
		return ((::System::Int32(*)(::ENPCAvatarGender, ::ENPCAvatarSize, ::System::Int32))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_GETRANDOMNPCID_OFFSET))(gender, size, number);
	}

	static ::System::Void ParseNumById(::System::Int32 id, ::System::Int32& num)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_PARSENUMBYID_OFFSET))(id, num);
	}

	static ::System::Boolean GetPureBodyPartTypeFromName(::System::String* inname, ::ENPCAvatarBodyPart& part)
	{
		return ((::System::Boolean(*)(::System::String*, ::ENPCAvatarBodyPart&))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_GETPUREBODYPARTTYPEFROMNAME_OFFSET))(inname, part);
	}

	static ::System::Boolean GetBodyInfoFromName(::System::String* name, ::ENPCAvatarGender& gender, ::ENPCAvatarSize& size)
	{
		return ((::System::Boolean(*)(::System::String*, ::ENPCAvatarGender&, ::ENPCAvatarSize&))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_GETBODYINFOFROMNAME_OFFSET))(name, gender, size);
	}

	static ::ENPCAvatarBodyPart GetBodyPartTypeFromName(::System::String* inname)
	{
		return ((::ENPCAvatarBodyPart(*)(::System::String*))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_GETBODYPARTTYPEFROMNAME_OFFSET))(inname);
	}

	static ::System::String* GetPartLOD0MeshName(::System::Int32 partId)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_GETPARTLOD0MESHNAME_OFFSET))(partId);
	}

	static ::System::String* GetPartBlendShapeAnimName(::ENPCAvatarGender gender, ::ENPCAvatarSize size, ::ENPCAvatarBodyPart part)
	{
		return ((::System::String*(*)(::ENPCAvatarGender, ::ENPCAvatarSize, ::ENPCAvatarBodyPart))((::PBYTE)hIl2Cpp + NPCAVATARDEFINE_GETPARTBLENDSHAPEANIMNAME_OFFSET))(gender, size, part);
	}
};
