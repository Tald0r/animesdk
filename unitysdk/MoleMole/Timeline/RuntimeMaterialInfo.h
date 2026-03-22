#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/RecorderMaterialType.h"
#include "unitysdk/MoleMole/Timeline/RecorderUnitType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Timeline/KFrameFieldType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Timeline { class ColorRecorderUnit; }
namespace MoleMole::Timeline { class FloatRecorderUnit; }
namespace MoleMole::Timeline { class KeyframeMBP; }
namespace MoleMole::Timeline { class TextureRecorderUnit; }
namespace MoleMole::Timeline { class Vector4RecorderUnit; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class MethodInfo; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_GET_MESHRENDERER_OFFSET UNITYSDK_OFFSET(0xB3D5550)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_GET__MATERIALPROPERTYBLOCK_OFFSET UNITYSDK_OFFSET(0xB3D5560)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_03C9423DB0AB525F_OFFSET UNITYSDK_OFFSET(0xB3DCB30)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_071850D2764E9D4C_OFFSET UNITYSDK_OFFSET(0xB3D8010)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_0A94652C700DE681_OFFSET UNITYSDK_OFFSET(0xB3DED40)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_157714A21849D308_OFFSET UNITYSDK_OFFSET(0xB3DCF50)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_2157CED3CDDF8996_1_OFFSET UNITYSDK_OFFSET(0xB3D93C0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_2157CED3CDDF8996_OFFSET UNITYSDK_OFFSET(0xB3D5F30)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_21B23FB7F45D62F4_OFFSET UNITYSDK_OFFSET(0xB3D7800)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_22A1AF9593D03312_OFFSET UNITYSDK_OFFSET(0xB3E2D60)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0xB3D8470)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_37EDB908C0475DE9_OFFSET UNITYSDK_OFFSET(0xB3DD090)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_3DAF14EF0477A1DA_OFFSET UNITYSDK_OFFSET(0xB3DD250)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_4618384FA3BBF17B_OFFSET UNITYSDK_OFFSET(0xB3DF7B0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_480B3AD7C7FF0861_OFFSET UNITYSDK_OFFSET(0xB3DB000)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_48B6CD53C9BCBAE3_OFFSET UNITYSDK_OFFSET(0xB3DADF0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_4AB78CEA4D660760_OFFSET UNITYSDK_OFFSET(0xB3DB7F0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_4B374FDE77243500_OFFSET UNITYSDK_OFFSET(0xB3DB650)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_5160A6048C9530CE_OFFSET UNITYSDK_OFFSET(0xB3D5AB0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_631B7E4F0A611ADD_OFFSET UNITYSDK_OFFSET(0xB3DE9A0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_64DBA18F795F9555_OFFSET UNITYSDK_OFFSET(0xB3E02F0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_6675531D375F235D_OFFSET UNITYSDK_OFFSET(0xB3E1410)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_6AFDBBB08FAC598D_OFFSET UNITYSDK_OFFSET(0xB3D86D0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_7C4776284A6A3539_OFFSET UNITYSDK_OFFSET(0xB3D79C0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_94B4E8244AAA5FFE_OFFSET UNITYSDK_OFFSET(0xB3DCD90)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_96189EDEF38976A6_OFFSET UNITYSDK_OFFSET(0xB3DB940)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_9773ABD3DD8F7AA4_OFFSET UNITYSDK_OFFSET(0xB3E1240)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_992C4981A31A4392_OFFSET UNITYSDK_OFFSET(0xB3DFF90)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_A47F69FAF411C04C_OFFSET UNITYSDK_OFFSET(0xB3E01A0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_ABE7715DB28B2DD1_OFFSET UNITYSDK_OFFSET(0xB3E0BB0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_AEB85D9249402975_OFFSET UNITYSDK_OFFSET(0xB3D5A30)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_BB1ADEF6A5975F1D_OFFSET UNITYSDK_OFFSET(0xB3D9020)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_C73125933564EC44_OFFSET UNITYSDK_OFFSET(0xB3D7F90)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB3D7960)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB3D83E0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_CD1D8725807FDBA7_OFFSET UNITYSDK_OFFSET(0xB3DF4A0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_CD8EB704BDED69B6_OFFSET UNITYSDK_OFFSET(0xB3DA940)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_DFA330684A0231AB_OFFSET UNITYSDK_OFFSET(0xB3E0730)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_ED34DCC6F6541B09_OFFSET UNITYSDK_OFFSET(0xB3DA850)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_F55104B9B863B6F0_OFFSET UNITYSDK_OFFSET(0xB3D7B70)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_F96B1C7229DF29DF_OFFSET UNITYSDK_OFFSET(0xB3E05D0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0xB3D72E0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB3D6F30)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB3D5620)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int RuntimeMaterialInfo_TypeDefinitionIndex = 73533;

	class RuntimeMaterialInfo : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*>** StaticGet_avatar_shader_pass()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo_TypeDefinitionIndex)->GetStaticField(0x3D5A0);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_AoParamPropertyList()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo_TypeDefinitionIndex)->GetStaticField(0x3D5A8);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_SpShaderPassList()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo_TypeDefinitionIndex)->GetStaticField(0x3D5B0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_addInstanceMaterialPathMethod()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo_TypeDefinitionIndex)->GetStaticField(0x3D5B8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_colorSubKey()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo_TypeDefinitionIndex)->GetStaticField(0x3D5C0);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*>** StaticGet_avatar_keywords_enable()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo_TypeDefinitionIndex)->GetStaticField(0x3D5C8);
		}
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_properties()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo_TypeDefinitionIndex)->GetStaticField(0x3D5D0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_skipPropertyKeys()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo_TypeDefinitionIndex)->GetStaticField(0x3D5D8);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_PreZKeyWordList()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo_TypeDefinitionIndex)->GetStaticField(0x3D5E0);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_SkipFloatKeys()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo_TypeDefinitionIndex)->GetStaticField(0x3D5E8);
		}
		// static const ::System::Int32 RenderType_Hair = 0x2; // 0x0
		// static const ::System::Int32 RenderType_EyeBrows = 0x1; // 0x0
		// static const ::System::String* MaterialPropertyHeaderStr; // 0x0
		// static const ::System::String* TextureInfoSuffix; // 0x0
		::System::Boolean showDetail; // 0x10
		::System::Boolean newMaterialInfo; // 0x11
		::UnityEngine::Material* sourceMaterial; // 0x18
		::UnityEngine::Material* instanceMaterial; // 0x20
		::MoleMole::Timeline::RecorderMaterialType MaterialType; // 0x28
		::System::Int32 index; // 0x2C
		::System::Collections::Generic::List_1<::MoleMole::Timeline::TextureRecorderUnit*>* textureConfigs; // 0x30
		::System::Collections::Generic::List_1<::MoleMole::Timeline::Vector4RecorderUnit*>* textureInfoConfigs; // 0x38
		::System::Collections::Generic::List_1<::MoleMole::Timeline::FloatRecorderUnit*>* floatValConfigs; // 0x40
		::System::Collections::Generic::List_1<::MoleMole::Timeline::ColorRecorderUnit*>* ColorValConfigs; // 0x48
		::System::Int32 RendererQueue; // 0x50
		::System::Collections::Generic::List_1<::System::String*>* recorderKeyList; // 0x58
		::UnityEngine::Renderer* meshRenderer; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Texture*>* init_textureConfigs; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Vector4>* init_textureInfoConfigs; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* init_floatValConfigs; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Color>* init_ColorValConfigs; // 0x80
		::System::Collections::Generic::List_1<::System::String*>* textKeyList; // 0x88
		::System::Collections::Generic::List_1<::System::String*>* floatKeyList; // 0x90
		::System::Collections::Generic::List_1<::System::String*>* colorKeyList; // 0x98

		::System::Void _ctor(::UnityEngine::Renderer* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO__CCTOR_OFFSET))();
		}

		::UnityEngine::Renderer* get_MeshRenderer()
		{
			return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_GET_MESHRENDERER_OFFSET))(this);
		}

		::UnityEngine::MaterialPropertyBlock* get__materialPropertyBlock()
		{
			return ((::UnityEngine::MaterialPropertyBlock*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_GET__MATERIALPROPERTYBLOCK_OFFSET))(this);
		}

		::System::Void Method_1_2157CED3CDDF8996()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_2157CED3CDDF8996_OFFSET))(this);
		}

		::UnityEngine::Material* Method_1_5160A6048C9530CE()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_5160A6048C9530CE_OFFSET))(this);
		}

		::System::Void Method_1_7C4776284A6A3539(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_7C4776284A6A3539_OFFSET))(this, a1);
		}

		::System::Void Method_1_C73125933564EC44(::UnityEngine::Renderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_C73125933564EC44_OFFSET))(this, a1);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Boolean Method_1_6AFDBBB08FAC598D(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_6AFDBBB08FAC598D_OFFSET))(this, a1);
		}

		::System::Void Method_1_2157CED3CDDF8996_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_2157CED3CDDF8996_1_OFFSET))(this);
		}

		::UnityEngine::Material* Method_1_21B23FB7F45D62F4()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_21B23FB7F45D62F4_OFFSET))(this);
		}

		static ::System::String* Method_1_48B6CD53C9BCBAE3(::System::String* a1, ::UnityEngine::Timeline::KFrameFieldType a2)
		{
			return ((::System::String*(*)(::System::String*, ::UnityEngine::Timeline::KFrameFieldType))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_48B6CD53C9BCBAE3_OFFSET))(a1, a2);
		}

		::System::Void Method_1_CD8EB704BDED69B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_CD8EB704BDED69B6_OFFSET))(this);
		}

		::System::Boolean Method_1_4B374FDE77243500(::System::String* a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_4B374FDE77243500_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_4AB78CEA4D660760(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_4AB78CEA4D660760_OFFSET))(this, a1, a2);
		}

		::MoleMole::Timeline::RecorderUnitType Method_1_BB1ADEF6A5975F1D(::System::String* a1)
		{
			return ((::MoleMole::Timeline::RecorderUnitType(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_BB1ADEF6A5975F1D_OFFSET))(this, a1);
		}

		::System::Void Method_1_96189EDEF38976A6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_96189EDEF38976A6_OFFSET))(this);
		}

		::System::Void Method_1_03C9423DB0AB525F(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_03C9423DB0AB525F_OFFSET))(this, a1);
		}

		::MoleMole::Timeline::FloatRecorderUnit* Method_1_94B4E8244AAA5FFE(::System::String* a1)
		{
			return ((::MoleMole::Timeline::FloatRecorderUnit*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_94B4E8244AAA5FFE_OFFSET))(this, a1);
		}

		::System::Void Method_1_28EB11670A8E5A86()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_28EB11670A8E5A86_OFFSET))(this);
		}

		static ::System::String* Method_1_157714A21849D308(::System::String* a1, ::UnityEngine::Timeline::KFrameFieldType a2)
		{
			return ((::System::String*(*)(::System::String*, ::UnityEngine::Timeline::KFrameFieldType))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_157714A21849D308_OFFSET))(a1, a2);
		}

		::MoleMole::Timeline::ColorRecorderUnit* Method_1_37EDB908C0475DE9(::System::String* a1)
		{
			return ((::MoleMole::Timeline::ColorRecorderUnit*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_37EDB908C0475DE9_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Method_1_3DAF14EF0477A1DA(::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_3DAF14EF0477A1DA_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Boolean Method_1_992C4981A31A4392(::System::String* a1, ::UnityEngine::Texture* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_992C4981A31A4392_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_A47F69FAF411C04C(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_A47F69FAF411C04C_OFFSET))(this, a1);
		}

		::System::Void Method_1_071850D2764E9D4C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_071850D2764E9D4C_OFFSET))(this);
		}

		::System::Void Method_1_64DBA18F795F9555(::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_64DBA18F795F9555_OFFSET))(this, a1);
		}

		::System::Void Method_1_F96B1C7229DF29DF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_F96B1C7229DF29DF_OFFSET))(this);
		}

		::System::Void Method_1_DFA330684A0231AB(::System::String* a1, ::UnityEngine::Timeline::KFrameFieldType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Timeline::KFrameFieldType))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_DFA330684A0231AB_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_4618384FA3BBF17B(::System::String* a1, ::UnityEngine::Color a2, ::UnityEngine::Color a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a4, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Color, ::UnityEngine::Color, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_4618384FA3BBF17B_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_1_ABE7715DB28B2DD1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_ABE7715DB28B2DD1_OFFSET))(this);
		}

		::System::Void Method_1_AEB85D9249402975(::UnityEngine::Renderer* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_AEB85D9249402975_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_631B7E4F0A611ADD(::System::String* a1, ::UnityEngine::Texture* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Texture*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_631B7E4F0A611ADD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_CD1D8725807FDBA7(::System::String* a1, ::System::Single a2, ::System::Single a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a4, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_CD1D8725807FDBA7_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean Method_1_6675531D375F235D()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_6675531D375F235D_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* Method_1_F55104B9B863B6F0()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_F55104B9B863B6F0_OFFSET))(this);
		}

		::System::Void Method_1_0A94652C700DE681(::System::String* a1, ::UnityEngine::Vector4 a2, ::UnityEngine::Vector4 a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a4, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_0A94652C700DE681_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_1_ED34DCC6F6541B09(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_ED34DCC6F6541B09_OFFSET))(this, a1);
		}

		static ::System::Int32 Method_1_9773ABD3DD8F7AA4(::UnityEngine::Material* a1)
		{
			return ((::System::Int32(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_9773ABD3DD8F7AA4_OFFSET))(a1);
		}

		::System::Void Method_1_480B3AD7C7FF0861(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_480B3AD7C7FF0861_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_22A1AF9593D03312(::System::String* a1, ::UnityEngine::Color a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO_METHOD_1_22A1AF9593D03312_OFFSET))(this, a1, a2);
		}
	};
}
