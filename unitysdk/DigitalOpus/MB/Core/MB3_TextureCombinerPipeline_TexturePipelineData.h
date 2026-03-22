#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB2_PackingAlgorithmEnum.h"
#include "unitysdk/DigitalOpus/MB/Core/MB3_TextureCombinerPipeline_CreateAtlasForProperty.h"
#include "unitysdk/MB2_TextureBakeResults_ResultType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ColorSpace.h"

class MB2_TextureBakeResults;
namespace DigitalOpus::MB::Core { class MB3_TextureCombinerNonTextureProperties; }
namespace DigitalOpus::MB::Core { class MB_TexSet; }
namespace DigitalOpus::MB::Core { class ShaderTextureProperty; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE_TEXTUREPIPELINEDATA_GET_NUMATLASES_OFFSET UNITYSDK_OFFSET(0x1A383590)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE_TEXTUREPIPELINEDATA_ONLYONETEXTUREINATLASREUSETEXTURES_OFFSET UNITYSDK_OFFSET(0x1A3835A0)
#define DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE_TEXTUREPIPELINEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A383620)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_TextureCombinerPipeline_TexturePipelineData_TypeDefinitionIndex = 81400;

	class MB3_TextureCombinerPipeline_TexturePipelineData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* texPropertyNames; // 0x10
		::MB2_TextureBakeResults* _textureBakeResults; // 0x18
		::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties* nonTexturePropertyBlender; // 0x20
		::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* _customShaderPropNames; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* texPropNamesToIgnore; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* allowedMaterialsFilter; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* allObjsToMesh; // 0x40
		::Il2CppArray<::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline_CreateAtlasForProperty>* allTexturesAreNullAndSameColor; // 0x48
		::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MB_TexSet*>* distinctMaterialTextures; // 0x50
		::UnityEngine::Material* resultMaterial; // 0x58
		::System::Int32 _maxTilingBakeSize; // 0x60
		::System::Int32 _maxAtlasWidth; // 0x64
		::System::Int32 _maxAtlasHeight; // 0x68
		::MB2_TextureBakeResults_ResultType resultType; // 0x6C
		::DigitalOpus::MB::Core::MB2_PackingAlgorithmEnum _packingAlgorithm; // 0x70
		::System::Boolean _useMaxAtlasHeightOverride; // 0x74
		::System::Boolean _useMaxAtlasWidthOverride; // 0x75
		::System::Int32 _layerTexturePackerFastV2; // 0x78
		::System::Boolean _resizePowerOfTwoTextures; // 0x7C
		::System::Boolean _considerNonTextureProperties; // 0x7D
		::System::Boolean _saveAtlasesAsAssets; // 0x7E
		::System::Boolean _normalizeTexelDensity; // 0x7F
		::System::Int32 _atlasPadding_pix; // 0x80
		::UnityEngine::ColorSpace colorSpace; // 0x84
		::System::Boolean _meshBakerTexturePackerForcePowerOfTwo; // 0x88
		::System::Boolean _fixOutOfBoundsUVs; // 0x89
		::System::Boolean doMergeDistinctMaterialTexturesThatWouldExceedAtlasSize; // 0x8A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE_TEXTUREPIPELINEDATA__CTOR_OFFSET))(this);
		}

		::System::Int32 get_numAtlases()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE_TEXTUREPIPELINEDATA_GET_NUMATLASES_OFFSET))(this);
		}

		::System::Boolean OnlyOneTextureInAtlasReuseTextures()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_TEXTURECOMBINERPIPELINE_TEXTUREPIPELINEDATA_ONLYONETEXTUREINATLASREUSETEXTURES_OFFSET))(this);
		}
	};
}
