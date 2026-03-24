#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"
#include "unitysdk/miHoYoEmotion/BlendShapeData.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYOEMOTION_STOPSHAPEDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x18FE1C20)
#define MIHOYOEMOTION_STOPSHAPEDATA_GET_INFOMESSAGE_OFFSET UNITYSDK_OFFSET(0x18FE1BB0)
#define MIHOYOEMOTION_STOPSHAPEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18FE2360)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int StopShapeData_TypeDefinitionIndex = 37229;

	class StopShapeData : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::miHoYoEmotion::BlendShapeData>*>* emotionBlendShapes; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_STOPSHAPEDATA__CTOR_OFFSET))(this);
		}

		::System::String* get_infoMessage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_STOPSHAPEDATA_GET_INFOMESSAGE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_STOPSHAPEDATA_CLEAR_OFFSET))(this);
		}
	};
}
