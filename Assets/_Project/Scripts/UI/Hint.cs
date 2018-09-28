﻿using UnityEngine;
using UnityEngine.UI;

public class Hint : MonoBehaviour
{
    [SerializeField] protected Text _text;

    protected string _initialText;

    public RectTransform rectTransform;

    private void Awake()
    {
        _initialText = _text.text;
    }

    public void UpdateValue(string score)
    {
        _text.text = string.Format(_initialText, score);
    }
}