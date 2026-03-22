#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class ImageForSmoothMask; }
namespace MoleMole { class ImageSmoothMask_Class_1_D5BDCDD69CF32034; }
namespace MoleMole { class MonoMaskSlider; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_IMAGESMOOTHMASK_AWAKE_OFFSET UNITYSDK_OFFSET(0x7F10BF0)
#define MOLEMOLE_IMAGESMOOTHMASK_GENERATEUIQUADS_OFFSET UNITYSDK_OFFSET(0x7F114E0)
#define MOLEMOLE_IMAGESMOOTHMASK_METHOD_5_153FE1250EA5E5EE_OFFSET UNITYSDK_OFFSET(0x7F12BD0)
#define MOLEMOLE_IMAGESMOOTHMASK_METHOD_5_1D670D366F907230_OFFSET UNITYSDK_OFFSET(0x7F12110)
#define MOLEMOLE_IMAGESMOOTHMASK_METHOD_5_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x7F12C90)
#define MOLEMOLE_IMAGESMOOTHMASK_METHOD_5_37D3D9A3F3244B90_OFFSET UNITYSDK_OFFSET(0x7F10B80)
#define MOLEMOLE_IMAGESMOOTHMASK_METHOD_5_999B8B439422C7E7_OFFSET UNITYSDK_OFFSET(0x7F13000)
#define MOLEMOLE_IMAGESMOOTHMASK_METHOD_5_B3F39261B5412C77_OFFSET UNITYSDK_OFFSET(0x7F12930)
#define MOLEMOLE_IMAGESMOOTHMASK_METHOD_5_C7BF9C1E6A78DCAB_OFFSET UNITYSDK_OFFSET(0x7F10C60)
#define MOLEMOLE_IMAGESMOOTHMASK_METHOD_5_EBAC71FBE1837205_OFFSET UNITYSDK_OFFSET(0x7F12B50)
#define MOLEMOLE_IMAGESMOOTHMASK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x7F11210)
#define MOLEMOLE_IMAGESMOOTHMASK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x7F10AD0)
#define MOLEMOLE_IMAGESMOOTHMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x7F12910)

namespace MoleMole
{
	inline static constexpr unsigned int ImageSmoothMask_TypeDefinitionIndex = 45286;

	class ImageSmoothMask : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* _matPath; // 0x0
		::Foundation::AssetRequestHandle Field_5_1; // 0x18
		::UnityEngine::UI::Image* maskImage; // 0x38
		::MoleMole::ImageForSmoothMask* Field_5_3; // 0x40
		::UnityEngine::Material* Field_5_4; // 0x48
		::MoleMole::MonoMaskSlider* maskSlider; // 0x50
		::System::Single coverRatio; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGESMOOTHMASK__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGESMOOTHMASK_ONENABLE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGESMOOTHMASK_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGESMOOTHMASK_ONDESTROY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* GenerateUIQuads(::System::Collections::Generic::List_1<::System::Object*>*& a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGESMOOTHMASK_GENERATEUIQUADS_OFFSET))(this, a1);
		}

		static ::Il2CppArray<::UnityEngine::Vector2>* Method_5_B3F39261B5412C77(::UnityEngine::Sprite* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGESMOOTHMASK_METHOD_5_B3F39261B5412C77_OFFSET))(a1);
		}

		::System::Void Method_5_37D3D9A3F3244B90()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGESMOOTHMASK_METHOD_5_37D3D9A3F3244B90_OFFSET))(this);
		}

		::System::Void Method_5_EBAC71FBE1837205()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGESMOOTHMASK_METHOD_5_EBAC71FBE1837205_OFFSET))(this);
		}

		::System::Void Method_5_153FE1250EA5E5EE(::UnityEngine::UI::Image* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGESMOOTHMASK_METHOD_5_153FE1250EA5E5EE_OFFSET))(this, a1);
		}

		::System::Void Method_5_C7BF9C1E6A78DCAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGESMOOTHMASK_METHOD_5_C7BF9C1E6A78DCAB_OFFSET))(this);
		}

		::System::Void Method_5_367B9590522079D1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGESMOOTHMASK_METHOD_5_367B9590522079D1_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::MoleMole::ImageSmoothMask_Class_1_D5BDCDD69CF32034*>* Method_5_1D670D366F907230(::UnityEngine::UI::Image* a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::ImageSmoothMask_Class_1_D5BDCDD69CF32034*>*(*)(::UnityEngine::UI::Image*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGESMOOTHMASK_METHOD_5_1D670D366F907230_OFFSET))(a1, a2);
		}

		::System::Void Method_5_999B8B439422C7E7(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGESMOOTHMASK_METHOD_5_999B8B439422C7E7_OFFSET))(this, a1, a2);
		}
	};
}
